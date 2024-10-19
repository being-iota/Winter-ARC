import React from 'react';
import ReactDOM from 'react-dom';

var h1 = React.createElement('h1', null, "Hellow world")
var parent = document.querySelector("#parent")
var root  = ReactDOM.createRoot(parent)
root.render(h1)
// console.log(parent)
// console.log(Reach1tDOM)