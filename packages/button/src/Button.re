let component = ReasonReact.statelessComponent("Home");

let s = ReasonReact.string;

let make = _children => {
  ...component,
  render: _self => <button> {s("Hello")} </button>,
};
