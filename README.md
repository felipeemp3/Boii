# 🎮 boiii-free Launcher Modificado

[![Build](https://img.shields.io/badge/build-passing-brightgreen?style=flat-square)]()
[![Discord](https://img.shields.io/badge/Discord-Rich%20Presence-blue?style=flat-square&logo=discord)]()
[![License](https://img.shields.io/badge/license-MIT-lightgrey?style=flat-square)]()

Un **launcher modificado** para *boiii-free* con integración de
**Discord Rich Presence**, configurado con **Premake5** y compilable en
**Visual Studio 2022 (MSBuild)**.

------------------------------------------------------------------------
## 📜 Créditos

Este proyecto es un **fork/modificación** del trabajo original de **[Ezz-lol](https://github.com/Ezz-lol)**.  
Todo el mérito por la base del launcher y el desarrollo inicial es para él. 🙌  

Mi aporte se centra en mejoras, personalización y la integración de nuevas funciones (como la presencia de Discord).

-----------------------------------------------------------------------

## ✨ Características

-   ✅ Integración con **Discord Rich Presence**\
-   ✅ Soporte para mostrar:
    ✅ Solo se mostrata " Jugando Call of duty: Black Ops 3 "
-   ✅ Configuración multiplataforma (Debug / Release)\
-   ✅ Uso de dependencias externas (`asmjit`, `curl`, `zlib`,
    `rapidjson`, etc.)\
-   ✅ Proyecto gestionado con **Premake5**

------------------------------------------------------------------------

## 📂 Estructura del proyecto

    boiii-free/
    │── build/              # Archivos generados por premake
    │── deps/               # Dependencias externas (asmjit, discord, etc.)
    │── src/
    │   ├── client/         # Código principal del cliente
    │   ├── common/         # Utilidades compartidas
    │   └── tlsdll/         # Biblioteca dinámica
    │── tools/              # Premake5 y utilidades
    │── premake5.lua        # Script de configuración de proyectos

------------------------------------------------------------------------

## ⚙️ Instalación y compilación

### 🔹 1. Clonar el repositorio

``` bash
git clone https://github.com/Ezz-lol/boiii-free
cd boiii-free
```

### 🔹 2. Instalar dependencias

Coloca las librerías en la carpeta `deps/`, por ejemplo:

    deps/
     ├── asmjit/
     ├── discord/
     ├── curl/
     ├── zlib/
     └── rapidjson/

### 🔹 3. Generar solución con Premake

Ejecuta en PowerShell:

``` powershell
  .\tools\premake5.exe vs2022
```

Esto generará `build/boiii.sln`.

### 🔹 4. Compilar con MSBuild

``` powershell
& "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\MSBuild\Current\Bin\amd64\MSBuild.exe" build\boiii.sln /p:Configuration=Debug /p:Platform=x64
```

El ejecutable se generará en:

    build/bin/x64/Debug/boiii.exe

------------------------------------------------------------------------

## 🎯 Uso

1.  Asegúrate de tener `discord_game_sdk.dll` en la misma carpeta que
    `boiii.exe`.\

2.  Lanza el ejecutable:

    ``` powershell
    .uildind\Debugoiii.exe
    ```

3.  En tu perfil de Discord verás tu **presencia personalizada**
    mostrando:

    -   🎮 Solo se mostrata " Jugando Call of duty: Black Ops 3 "

------------------------------------------------------------------------

## 🖼️ Vista previa

![alt text](image.png)

------------------------------------------------------------------------

## 🤝 Contribución

Si quieres mejorar este launcher:\
1. Haz un fork 🍴\
2. Crea una rama `feature/mi-mejora`\
3. Haz un commit ✨\
4. Abre un pull request 🚀

------------------------------------------------------------------------

## 📜 Licencia

Este proyecto está bajo la licencia **MIT**.\
¡Siéntete libre de usarlo y modificarlo! ⚡