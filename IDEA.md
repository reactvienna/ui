# Package Setup

We have a NPM organization an release every component as a separate package. Therefor we want to have a monorepo and use yarn workspaces.

Further Resources
- https://reasonml.chat/t/best-practices-for-using-reasonml-in-a-monorepo/161

# Styles

During early experiments we should figure out if we want to support styled-system or opt in for a Reach UI approach where you can use all sorts of CSS in JS libraries.

# Types

We want to use [genType](https://github.com/cristianoc/genType) to generate TypeScript, Flow and an untyped version for each component.

# Environment 

- Desktop
- Mobile

## Accessability (a11y)

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
