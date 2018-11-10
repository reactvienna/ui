let component = ReasonReact.statelessComponent("Home");

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <h1> {ReasonReact.string("UI Playground")} </h1>
      <div> <Button /> </div>
    </div>,
};
