let component = ReasonReact.statelessComponent(__MODULE__);

let s = ReasonReact.string;

[@genType]
let make = _children => {
  ...component,
  render: _self => <input type_="checkbox" />,
};
