# SADX Keyboard Remapper by PkR

Keyboard Remapper is a mod for Sonic Adventure DX PC (2004) that lets you change keyboard controls. To use this mod, you need SADX Mod Loader and SADX Mod Manager.
Starting with version 2.2 the mod also allows to map the controller's Z button, which is normally inaccessible by keyboard.

**Remapping keys**

There are three ways to change key binds for this mod:
1) Run ConfigTool.exe in the mod folder .
2) Use SADX Mod Manager's mod configuration dialog and type in the keys manually (see keys.txt for a list of mappable keys).
3) Edit the file config.ini in the mod folder manually (see keys.txt for a list of mappable keys).

**Using the config tool**

Click the keybind you want to change and press the desired key. Right click on a keybind to clear the binding.

**Information for speedrunners**

In the default configuration (alternative layouts for Keys 2 and 3 disabled) the mod is 100% speedrun friendly. It changes key binds directly without altering SADX input routines, so it does not add any delays to input recognition (except "center camera" and controller's Z button, which are checked outside of the vanilla input routine). 
When alternative layouts are enabled, the mod maps SADX keyboard keys to a set of virtual keys, for which keypresses are detected in the Mod Loader's OnInput function. This still uses vanilla SADX input routines for actual movement, but keypress detection may (or may not) be delayed for up to one frame.
To ensure 100% vanilla behavior, disable the option "AlternativeLayouts" in the mod's config or uncheck "Enable Keys 2 and 3" in the config tool.

**Known issues**

-This mod is NOT compatible with the Input Mod. There are no plans to make these two mods compatible.
-Up and Down on the D-Pad are swapped when using the Smooth Camera mod.
-Some keys are not detected by vanilla SADX so they are not mappable and will be displayed as "None" in the config tool.

Developer's Twitter: https://twitter.com/pkr_sadx

**Related mods/tools:**

SADX Mod Installer: http://www.moddb.com/mods/sadx-dreamcast-conversion/news/new-mod-installer-now-available1

SADX Mod Loader (direct link): http://mm.reimuhakurei.net/sadxmods/SADXModLoader.7z

Dreamcast Conversion: https://github.com/PiKeyAr/sadx_dreamcast

HD GUI 2: https://github.com/PiKeyAr/sadx-hd-gui