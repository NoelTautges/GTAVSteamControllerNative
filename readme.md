![preview](https://raw.githubusercontent.com/GoldRenard/GTAVSteamControllerNative/master/docs/steam_controller.png)

## Steam Controller Native for Grand Theft Auto V

This plugin project is an implementation of native Steam Controller IGAs (In-Game Actions) feature. It allows to switch  control layouts (Action Sets) automatically for specific gameplay modes like Portal 2 does. Following action sets are supported:
- Menu controls
- On foot controls
- In vehicle controls
- In flying vehicle controls

### Requirements

- Grand Theft Auto V (Steam version)
- [ScriptHookV](http://www.dev-c.com/gtav/scripthookv/)

### How to use

1. Launch Steam in BigPicture Mode;
2. Create new Steam Controller template for GTA V with four action sets **in sequence**: Menu, Foot, Vehicle, Flying Vehicle. You can leave them empty for now and configure later in game, or you can use prepared configuration like described in following section;
3. Download [latest version of plugin](https://github.com/GoldRenard/GTAVSteamControllerNative/releases/latest);
5. Copy `SteamControllerNative.asi` to game folder;
6. Start the game. It should switch action sets automatically, you just have to configure them as you want;

### Prepared controller configuration

Instead of creating a controller configuration from scratch, you can use [prepared one](https://github.com/GoldRenard/GTAVSteamControllerNative/blob/master/controller.vdf). 

Personally, I don't want to publish this plugin-specific configuration to the Steam public list to avoid any confusion for users who don't use this plugin. So here are manual instruction:

1. Create new Steam Controller template for GTA V and save it **locally** with some unique name;
2. Switch to any other controller configuration, close BigPicture or better even Steam;
3. Steam stores all controller configurations in `<Steam>\SteamApps\workshop\content\241100\` folder. Use any notepad with 'Seach in files' feature supported to search your configuration by that unique name;
4. Replace it with [prepared one](https://github.com/GoldRenard/GTAVSteamControllerNative/blob/master/controller.vdf);
5. Start Steam, BigPicture, switch back to your configuration and it should be updated. You're done.

### Online Warning

Sorry, you can't play with this mod Online (just yet :wink:). If you're going to play Online, you must remove ScriptHookV and all your plugins.

### Credits

- Thanks to Alexander Blade for both the ScriptHook V and the ASI Loader.
