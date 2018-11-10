let component = ReasonReact.statelessComponent("Button");

let s = ReasonReact.string;

module Styles = {
  open Css;

  let button = () =>
    style([
      display(inlineFlex),
      justifyContent(center),
      alignItems(center),
      boxSizing(borderBox),
      padding2(~v=px(8), ~h=px(16)),
      minWidth(px(64)),
      background(black),
      color(white),
      borderRadius(px(2)),
      fontSize(rem(0.875)),
      fontWeight(500),
      fontFamily("\"Helvetica\", \"Arial\", sans-serif"),
      textTransform(uppercase),
      border(px(1), solid, black),
      lineHeight(pct(150.)),
      letterSpacing(rem(0.02)),
      hover([
        background(rgb(44, 44, 44)),
        border(px(1), solid, rgb(44, 44, 44)),
      ]),
    ]);
};

[@genType]
let make = children => {
  ...component,
  render: _self => <button className={Styles.button()}> ...children </button>,
};
