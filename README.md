# Bare-Metal Embedded Drivers Repository

This repository contains **bare-metal embedded C code** for developing drivers directly from microcontroller **datasheets** and **reference manuals**—without using any third-party libraries or HALs. The focus is on low-level register-level programming for various on-chip peripherals.

## 🚀 What You'll Find Here

- ✅ Peripheral drivers written from scratch
  - [x] ADC (Analog to Digital Converter)
  - [ ] UART (Coming soon)
  - [ ] GPIO, Timers, SPI, I2C (Planned)
- 📚 Code written based on datasheet and reference manual of the microcontroller
- 🧱 No external libraries used — 100% bare-metal
- 🔄 Ongoing updates and new drivers

## 🛠 Microcontroller Platform

The code is targeted for:
- This project targets the **STM32F411RE microcontroller**, a high-performance ARM Cortex-M4 based MCU from STMicroelectronics.
- ARM Cortex-M4 @ 100 MHz with FPU
- 512 KB Flash, 128 KB SRAM
- Rich set of peripherals (ADC, UART, SPI, I2C, Timers, etc.)
- ST-LINK/V2-1 onboard debugger
- Easy integration with STM32CubeIDE or bare-metal toolchains


## 🧑‍💻 How to Use

1. Clone this repository
2. Open in your preferred IDE or toolchain
3. Compile with a bare-metal toolchain (e.g., `arm-none-eabi-gcc`)
4. Flash to target microcontroller

## 📌 Goals

- Understand hardware by writing drivers from scratch
- Improve register-level programming skills
- Build a reusable bare-metal driver library

## 📅 Updates

This repository will be regularly updated with:
- New drivers (e.g., UART, SPI, Timers)
- Code improvements and bug fixes
- Documentation and usage examples

## 📬 Contributions

Pull requests are welcome if you'd like to contribute clean and well-documented bare-metal drivers for other peripherals.

## 📄 License

[MIT License](LICENSE)

---

Feel free to fork, star ⭐ and follow the repo for updates!


