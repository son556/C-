"use strict";

const express = require("express");
const router = express.Router();

const ctrl = require("./home.crtl");

const multer = require('multer');

router.get("/", ctrl.output.home);
router.get("/login", ctrl.output.login);
router.get("/register", ctrl.output.register);
router.get("/index", ctrl.output.index);

router.post("/login", ctrl.process.login);
router.post("/register", ctrl.process.register);

router.get("/upload", ctrl.output.upload);
router.get("/mypage", ctrl.output.mypage);

router.get("/information", ctrl.output.information);
router.post("/information", ctrl.process.information);

// router.post("/upload", ctrl.process.upload)

function timestamp() {
  var today = new Date();
  today.setHours(today.getHours() + 9);
  return today.toISOString().replace('T', ' ').substring(0, 19).replaceAll("-", "").replaceAll(" ", "_").replaceAll(":", "");
}

var fs = require('fs');
var file_name;

var storage = multer.diskStorage({ // 2
  destination(req, file, cb) {
    cb(null, 'uploadedFiles/');
  },
  filename(req, file, cb) {
    console.log(file);
    file_name = req.session.uid + '_' + timestamp() + '_' + file.originalname;
    cb(null, file_name);
  },
});

var uploadWithOriginalFilename = multer({ storage: storage });

router.post('/confirmation', uploadWithOriginalFilename.single('attachment'), function (req, res) { // 5
  res.render("home/confirmation");
});


router.get('/picture', function (req, res) { // 5

  let path = "C:\\Users\\AI_server\\Desktop\\login-lecture\\app\\uploadedFiles\\" + file_name;
  fs.readFile(path, function (err, data) {
    res.writeHead(200);
    res.write(data);
    res.end();
  });

});


router.post('/result', function (req, res) { // 5
  console.log("file_name :" + file_name);

  var PythonShell = require("python-shell");
  var options_detect = {
    mode: 'text',
    pythonPath: '',
    pythonOptions: ['-u'],
    scriptPath: '',
    args: ['--source', 'C:/Users/AI_server/Desktop/login-lecture/app/uploadedFiles/' + file_name]
  };

  PythonShell.PythonShell.run('yolov5-master/detect.py', options_detect, async function (err, results) {

    if (err) { console.log(err); return err };

    await res.render("home/result");
  });

});

router.get('/picture_YOLO', function (req, res) { // 5

  let path = "C:\\Users\\AI_server\\Desktop\\login-lecture\\app\\image\\" + file_name;
  fs.readFile(path, function (err, data) {
    console.log(err);
    res.writeHead(200);
    res.write(data);
    res.end();
  });

});

router.get('/prepare', function (req, res) { // 5

  let path = "C:/Users/AI_server/Desktop/login-lecture/app/src/views/home/prepare.jpg";
  fs.readFile(path, function (err, data) {
    console.log(err);
    res.writeHead(200);
    res.write(data);
    res.end();
  });

});

module.exports = router;