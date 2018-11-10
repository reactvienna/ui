let component = ReasonReact.statelessComponent("Home");

let s = ReasonReact.string;

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <h1> "UI Playground"->s </h1>
      <div> <Button> "Save"->s </Button> </div>
      <div> <Button disabled=true> "Save"->s </Button> </div>
      <div> <Switch /> </div>
    </div>,
};
