# QMK Configs

A place to store assorted QMK config bits.
Of course I could keep a cloned version of qmk_firmware, but I really only need to keep track of a small number of files across that HUGE repo, so this seems easier.


## General Instructions

1. See each kb's README for the appropriate location in the original file structure
2. create a new folder for the relevant keyboard under keymaps, eg `keyboards/kbdfans/kbd75/keymaps/jbeanland` (convention is github username in case it gets contributed back. Could be anything really.)
3. compile with `qmk compile -kb {KEYBOARD} -km {KEYMAP}`, eg `qmk compile -kb kbdfans/kbd75/rev2 -km jbeanland`
4. Use QMK Toolbox to flash the board.