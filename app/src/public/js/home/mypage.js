"use strict";

const id = document.querySelector("#id"),
  psword = document.querySelector("#psword"),
  registerBtn = document.querySelector("#button");

registerBtn.addEventListener("click", mypage);

function mypage() {
  alert("Are you sure change your password?")

  const req = {
    id: id.value,
    psword: psword.value,
  };
  

  fetch("/information", {
    method: "POST",
    headers: {
      "Content-Type": "application/json",
    },
    body: JSON.stringify(req),
  })
    .then((res) => res.json())
    .then((res) => {
      if (res.success) {
        history.go(0);
      } else {
        alert(res.msg);
      }
    })
    .catch((err) => {
      console.error("UPDATE 중 에러 발생");
    });
}