# Package Setup

We have a NPM organization an release every component as a separate package. Therefor we want to have a monorepo and use yarn workspaces.

Further Resources
- https://reasonml.chat/t/best-practices-for-using-reasonml-in-a-monorepo/161

# Styles

During early experiments we should figure out if we want to support styled-system or opt in for a Reach UI approach where you can use all sorts of CSS in JS libraries.

# Types

We want to use [genTypeScript](https://github.com/cristianoc/genTypeScript) and [genFlow](https://github.com/cristianoc/genFlow) to generate types for each component.

# Accessability (a11y)

Every component should be accessible.

# Planned Components

- Arrow
- Button
- Menu
- Dialog (Modal)
- Switch (Toggle)
- Text input (autogrowing)
- Tag input
- Tooltip
- Toast
- Text
