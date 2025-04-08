# loenah56
Loenah56, A split-keyboard with 56 keys.

# How to flash firmware
Use qmk toolbox. Copy loenah folder to qmk toolbox keyboard folder.
Connect one side with bootloader mode. Execute qmk toolbox and execute below line.

qmk flash -kb loenah -km default -bl uf2-split-left (for left)
qmk flash -kb loenah -km default -bl uf2-split-right (for right)

Connect other side and do as same.
