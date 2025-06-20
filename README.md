# DIY-voltmeter
DIY Arduino voltmeter for fast circuit diagnostics.

---

### **Project Title:** Voltmeter of Range 0–5V (Arduino-Based)

* **Goal:** Build a DIY voltmeter using Arduino to measure 0–5V accurately (±0.02V error).
* **Purpose:** Needed a voltmeter for circuit debugging; this project cut diagnosis time drastically.
* **Components:** Arduino Uno, LED, resistors (220Ω), jumper wires.
* **Circuit:** Uses resistors to prevent random readings, LED confirms closed circuit.
* **Code:** Converts analog input (0–1023) to voltages (0–5V) using `5.0/1023.0`; uses `abs()` and a 500ms delay.
* **Results:** Accurate voltage readings across resistors and LED; near 5V total.
* **Challenges:** Code errors (mixing Python & C++), long diagnosis time, self-doubt.
* **Learnings:** Improved debugging, overcame self-doubt, proud first project.
* **Conclusion:** Just the start of a journey to keep building. Looking for guidance and mentorship.

---

