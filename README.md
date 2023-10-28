# UE4-Load-Exe
- **Doesn't use CreateThread or CreateProcess which can help when loading multiple plugins if too many Threads/Processes are being used/opened.**
- **Doesn't attach Plugin/ModMenu directly to program memory, threads, files, etc. (The ModMenu/Plugin needs to handle this logic).**

## Building:
### Building Example DLL:
```
> g++ -shared -o ExamplePlugin.dll -O3 -s LoadThatModMenu.cpp
```
### Building Example ModMenu:
```
> g++ -o ModMenu.exe -O3 -s ModMenuLoader.cpp
```

## Download:
- **Both of these example files need to located in the "Mods" or "UnrealModPlugins" Folder, right beside eachother (can be changed).**
- **This generally needs to be compiled by Plugin/ModMenu Developers. However there is a POC Download Below.**
- **Download [ExampleModMenuLoader.dll](https://github.com/Cracko298/UE4-Load-Exe/releases/download/ExampleRelease/ExampleModMenuLoader.dll) (Example Plugin).**
- **Download [ModMenuExample](https://github.com/Cracko298/UE4-Load-Exe/releases/download/ExampleRelease/ModMenuExample.exe) (Example ModMenu).**

