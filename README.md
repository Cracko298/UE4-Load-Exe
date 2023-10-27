# UE4-Load-Exe
UE4LE (UE4-Load-Exe) loads an executable file when called by UMU, RE-UE4SS, or UML. Allowing executable ModMenu's to be loaded at game startup.



## Building:
### Building Example DLL:
```
> g++ -shared -o ExamplePlugin.dll -O3 -s LoadThatModMenu.cpp
```
### Building Example ModMenu:
```
> g++ -o ModMenu.exe -O3 -s ModMenuLoader.cpp
```
