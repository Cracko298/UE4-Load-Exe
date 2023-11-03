# UE4-Load-Exe
- **Doesn't use CreateThread or CreateProcess which can help when loading multiple plugins if too many Threads/Processes are being used/opened.**
- **Doesn't attach Plugin/ModMenu directly to program memory, threads, files, etc. (The ModMenu/Plugin needs to handle this logic).**
- **"Point2Dir.dll/point_to_dir.cpp" reads a file called** ***iszplg.config*** **which points to a ModMenu that isn't in the same directory as the .dll**

## Building:
### Building Example DLL:
```
> g++ -shared -o ExamplePlugin.dll -O3 -s LoadThatModMenu.cpp
```
### Building Point2Dir.dll:
```
> g++ -shared -o Point2Dir.dll -O3 -s point_to_dir.cpp
```
### Building Example ModMenu:
```
> g++ -o ModMenu.exe -O3 -s ModMenuLoader.cpp
```

- **Need an Video Showing it Off? I got you covered [here](https://youtu.be/QZRqSOC6Bpw?si=0Eg_uDVFtrz_MRDQ).**

## Download:
- **Both of these example files need to located in the "Mods" or "UnrealModPlugins" Folder, right beside eachother (can be changed).**
- **This generally needs to be compiled by Plugin/ModMenu Developers. However there is a POC Download Below.**
- **Download [ExampleModMenuLoader.dll](https://github.com/Cracko298/UE4-Load-Exe/releases/download/ExampleRelease/ExampleModMenuLoader.dll) (Example Plugin).**
- **Download [ModMenuExample.exe](https://github.com/Cracko298/UE4-Load-Exe/releases/download/ExampleRelease/ModMenuExample.exe) (Example ModMenu).**

