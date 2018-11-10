const HtmlWebPackPlugin = require("html-webpack-plugin");

const isProd = process.env.NODE_ENV === "production";

module.exports = {
  entry: "./src/Index.bs.js",
  mode: isProd ? "production" : "development",
  resolve: {
    modules: ["node_modules"],
    symlinks: false
  },
  plugins: [
    new HtmlWebPackPlugin({
      filename: "index.html",
      template: "src/index.html"
    })
  ]
};
