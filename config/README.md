# Centralized ZMK Configuration

In addition to the actual `.keymap` files for different boards/shields, there are here many files here.

* [`base.keymap`](./base.keymap): Common base configuration that consolidates all the different behaviors and keymap.
* [`include/layers.h`](./include/layers.h): Map of layer names to layer numbers.
* [`include/keymap.dtsi`](./include/keymap.dtsi): The actual centralized [keymap](https://zmk.dev/docs/keymaps) definition.
* [`key-labels`](./include/key-labels/): Key labels are structured labels that abstract the key position. This allows for composable keymaps, that can be built on top of a common denominator keymap. Please see [`include/keymap.dtsi`](./include/keymap.dtsi) to see how this is used.
* [`include/combos.dtsi`](./include/keymap.dtsi): [Combo](https://zmk.dev/docs/keymaps/combos) definitions.
* [`include/custom-behaviors.dtsi`](./include/custom-behaviors.dtsi): Custom [behavior](https://zmk.dev/docs/keymaps/behaviors) definitions, e.g., [smart/auto layers](https://github.com/urob/zmk-auto-layer).
* [`include/mouse.dtsi`](./include/mouse.dtsi): Mouse/pointing device-related configuration.
* [`include/home-row.dtsi`](./include/home-row.dtsi): [Timeless home-row modifiers](https://github.com/urob/zmk-config#timeless-homerow-mods) definition.
* [`include/aliases.dtsi`](./include/aliases.dtsi): Aliases of keycode compositions defined for convenience and readability.
