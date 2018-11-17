let component = ReasonReact.statelessComponent(__MODULE__);

let s = ReasonReact.string;

module Styles = {
  open Emotion;

  let button =
    css([
      label("button"),
      display(`inlineFlex),
      position(`relative),
      justifyFlexContent(`center),
      alignFlexItems(`center),
      boxSizing(`borderBox),
      verticalAlign(`middle),
      overflow(`hidden),
      padding2(`px(0), `px(16)),
      minWidth(`px(64)),
      height(`px(36)),
      backgroundColor(`hex("6e6fe2")),
      color(`hex("fff")),
      borderRadius(`px(2)),
      fontSize(`rem(0.875)),
      fontWeight(500),
      fontFamily("\"Helvetica\", \"Arial\", sans-serif"),
      textTransform(`uppercase),
      border(`px(0), solid, transparent),
      outline(`px(0), solid, transparent),
      letterSpacing(`em(0.09)),
      whiteSpace(`nowrap),
      cursor(`pointer),
      transition("all", `ms(30), `ease, `ms(0)),
      boxShadow(
        ~x=`px(0),
        ~y=`px(4),
        ~blur=`px(6),
        ~spread=`px(0),
        ~inset=false,
        `rgba((50, 50, 93, 0.11)),
      ),
      hover([
        backgroundColor(`hex("8081ff")),
        transform(`translateY(`px(-1))),
        boxShadow(
          ~x=`px(0),
          ~y=`px(7),
          ~blur=`px(14),
          ~spread=`px(0),
          ~inset=false,
          `rgba((50, 50, 93, 0.11)),
        ),
      ]),
      active([
        backgroundColor(`hex("6364d2")),
        color(`hex("fcfcfc")),
        transform(`translateY(`px(0))),
        boxShadow(
          ~x=`px(0),
          ~y=`px(4),
          ~blur=`px(6),
          ~spread=`px(0),
          ~inset=false,
          `rgba((50, 50, 93, 0.11)),
        ),
      ]),
      disabled([
        backgroundColor(`hex("b2b2d4")),
        cursor(`default),
        pointerEvents(`none),
      ]),
    ]);
};

[@genType]
let make = (~disabled=false, children) => {
  ...component,
  render: _self =>
    <button type_="button" disabled className=Styles.button>
      ...children
    </button>,
};
