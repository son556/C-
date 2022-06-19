"use strict";

const User = require("../../models/User");

const output = {
  home: (req, res) => {
    // console.log("ctrl_h_login_req: ", req);
    // console.log("ctrl_h_login_req.id: ", req.body.id);
    res.render("home/login");
  },
  login: (req, res) => {
    console.log("ctrl_login_req.id: ", req.body.id);
    res.render("home/login");
  },
  register: (req, res) => {
    res.render("home/register");
  },

  upload: (req, res) => {
    if (req.session.uid != undefined && req.session.upw != undefined) {
      res.render("home/upload");
    } else {
      res.render("home/login");
    }

  },

  mypage: (req, res) => {
    res.render("home/mypage");
  },

  information: (req, res) => {

    if (req.session.uid != undefined && req.session.upw != undefined) {
      res.render("home/information", { id: req.session.uid, name: req.session.uname });
    } else {
      res.render("home/login");
    }
  },

  index: (req, res) => {
    res.render("home/index");
  },
};


const process = {
  login: async (req, res) => {
    const user = new User(req.body);
    const response = await user.login();
    req.session.uid = req.body.id;
    req.session.upw = req.body.psword;
    setTimeout(function() {
      req.session.destroy(function(){ 
        req.session;
        });
    }, 3600000);
    return res.json(response);
  },
  register: async (req, res) => {
    const user = new User(req.body);
    const response = await user.register();
    return res.json(response);
  },

  information: async (req, res) => {
    const user = new User(req.body);
    const response = await user.update();
    return res.json(response);
  },

};

module.exports = {
  output,
  process,
};