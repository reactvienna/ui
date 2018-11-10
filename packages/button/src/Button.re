let component = ReasonReact.statelessComponent("Button");

let s = ReasonReact.string;

module Styles = {
  open Css;

  let button = () =>
    style([
      display(inlineFlex),
      position(relative),
      justifyContent(center),
      alignItems(center),
      boxSizing(borderBox),
      verticalAlign(middle),
      overflow(hidden),
      padding2(~v=px(0), ~h=px(16)),
      minWidth(px(64)),
      height(px(36)),
      background(hex("6e6fe2")),
      color(white),
      borderRadius(px(2)),
      fontSize(rem(0.875)),
      fontWeight(500),
      fontFamily("\"Helvetica\", \"Arial\", sans-serif"),
      textTransform(uppercase),
      border(px(0), solid, transparent),
      outline(px(0), solid, transparent),
      letterSpacing(em(0.09)),
      whiteSpace(nowrap),
      cursor(`pointer),
      transition(~duration=30, ~timingFunction=ease, "all"),
      boxShadow(
        ~x=px(0),
        ~y=px(4),
        ~blur=px(6),
        ~spread=px(0),
        rgba(50, 50, 93, 0.11),
      ),
      hover([
        background(hex("8081ff")),
        transform(translateY(px(-1))),
        boxShadow(
          ~x=px(0),
          ~y=px(7),
          ~blur=px(14),
          ~spread=px(0),
          rgba(50, 50, 93, 0.11),
        ),
      ]),
      /* NOTE using important due hover being injected after active */
      active([
        important(background(hex("595ab9"))),
        important(color(hex("fcfcfc"))),
        important(transform(translateY(px(0)))),
        important(
          boxShadow(
            ~x=px(0),
            ~y=px(4),
            ~blur=px(6),
            ~spread=px(0),
            rgba(50, 50, 93, 0.11),
          ),
        ),
      ]),
      disabled([
        important(background(hex("b2b2d4"))),
        cursor(`default),
        pointerEvents(`none),
      ]),
    ]);
};

[@genType]
let make = (~disabled=false, children) => {
  ...component,
  render: _self =>
    <button type_="button" disabled className={Styles.button()}>
      ...children
    </button>,
};
