let component = ReasonReact.statelessComponent("Button");

let s = ReasonReact.string;

[@genType]
let make = _children => {
  ...component,
  render: _self => <input type_="checkbox" />,
};
