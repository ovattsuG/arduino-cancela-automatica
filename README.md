# 🚧 Cancela Automática com Arduino

Este projeto implementa uma **cancela automática** utilizando **Arduino**, **sensor ultrassônico (HC-SR04)** e **servo motor**.  
Quando um objeto é detectado a menos de 10 cm, o sistema abre a cancela, acende o LED verde e após alguns segundos a fecha novamente.

---

## 🧠 Visão Geral

A ideia é simular o funcionamento de uma cancela de estacionamento ou portaria, utilizando componentes simples para controlar a abertura e fechamento com base na detecção de presença.  
O projeto é ideal para estudos de **automação, eletrônica básica e programação com Arduino**.

---

## 🧩 Componentes Utilizados

| Componente | Quantidade | Função |
|-------------|-------------|--------|
| Arduino Uno (ou compatível) | 1 | Microcontrolador principal |
| Sensor Ultrassônico HC-SR04 | 1 | Mede a distância até o objeto |
| Servo Motor SG90 (ou similar) | 1 | Simula a cancela |
| LED Verde | 1 | Indica passagem liberada |
| LED Vermelho | 1 | Indica passagem bloqueada |
| Resistores 220 Ω | 2 | Limitam corrente dos LEDs |
| Jumpers + Protoboard | — | Conexões do circuito |

---

## ⚙️ Conexões

| Pino Arduino | Componente | Descrição |
|---------------|-------------|-----------|
| 2 | LED Verde | Indica passagem livre |
| 3 | LED Vermelho | Indica bloqueio |
| 7 | Echo (HC-SR04) | Recebe o pulso refletido |
| 10 | Trig (HC-SR04) | Envia o pulso ultrassônico |
| 9 | Servo Motor (Sinal) | Controla o movimento da cancela |
| 5V | VCC do sensor e LEDs | Alimentação |
| GND | GND de todos os componentes | Terra comum |

---

## 🚀 Funcionamento

1. O sensor **HC-SR04** mede a distância até um objeto à frente.  
2. Quando um objeto é detectado a menos de **10 cm**, o servo motor gira, **abrindo a cancela**.  
3. O **LED verde** acende e o **LED vermelho** apaga, indicando passagem liberada.  
4. Após **3 segundos**, a cancela **fecha automaticamente**, o LED verde apaga e o vermelho acende novamente.  
5. A leitura da distância pode ser acompanhada pelo **Monitor Serial** da IDE do Arduino.

---

## 💡 Melhorias Futuras

- Adicionar **sensor de saída** para detectar quando o veículo passou.  
- Integrar **sistema RFID** ou **teclado numérico** para controle de acesso.  
- Mostrar mensagens em um **display LCD**.  
- Alimentar o **servo motor** com fonte externa para mais estabilidade.  
- Implementar **controle remoto ou via Wi-Fi (ESP8266 / ESP32)**.

---

## 📸 Montagem do Circuito

<img width="1487" height="787" alt="image" src="https://github.com/user-attachments/assets/8fd12a98-1b1a-4280-959f-1d3ddf2d8891" />

---

## 🎥 Demonstração
*[Demonstração do Projeto Cancela Automatica com Arduino UNO](https://youtu.be/vScZ3vp7K1s)*

---

## 📚 Conceitos Envolvidos

- Medição de distância com **HC-SR04**  
- Controle de **Servo Motor** com a biblioteca `Servo.h`  
- Uso de **condicionais e funções** em C++  
- Noções básicas de **automação e eletrônica aplicada**

---

## 👨‍💻 Autor

**Gustavo Corrêa**  
💻 Projeto desenvolvido para aprendizado em automação e eletrônica com Arduino.  
📚 *“Automação é transformar lógica em movimento.”*
