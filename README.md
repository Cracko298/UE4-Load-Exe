# UE4-Load-Exe
- **Doesn't use CreateThread or CreateProcess which can help when loading multiple plugins if too many Threads/Processes are being used/opened.**
- **Doesn't attach Plugin/ModMenu to program (ModMenu/Plugin needs to handle this logic).

## Building:
### Building Example DLL:
```
> g++ -shared -o ExamplePlugin.dll -O3 -s LoadThatModMenu.cpp
```
### Building Example ModMenu:
```
> g++ -o ModMenu.exe -O3 -s ModMenuLoader.cpp
```
