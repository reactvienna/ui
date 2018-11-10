let component = ReasonReact.statelessComponent("Home");

let s = ReasonReact.string;

module Styles = {
  open Css;

  let button = disabled =>
    style([
      background(disabled ? darkgray : white),
      color(black),
      borderRadius(px(3)),
    ]);
};

let make = _children => {
  ...component,
  render: _self =>
    <button className={Styles.button(false)}> {s("Hello")} </button>,
};
