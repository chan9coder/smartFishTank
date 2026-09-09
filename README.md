# 🐟 Smart Aquarium IoT System

## 📌 Project Summary  
 
IoT 기반 스마트 어항 시스템으로, **원격 모니터링 및 제어가 가능한 통합 플랫폼**을 구현한 프로젝트입니다.
 
센서 데이터 수집 → 서버 → 모바일 앱까지 연결하여
**실시간 상태 확인 및 자동 제어 시스템**을 구축했습니다.

---

<img width="1909" height="1069" alt="Image" src="https://github.com/user-attachments/assets/9f71c8e1-7869-497a-b0d9-9f65ba6bbd5d" />

## 🧑‍💻 My Role

* Arduino 기반 센서 데이터 처리 및 통신 구현
* Raspberry Pi를 이용한 하드웨어 제어 로직 개발
* Flask 서버 구축 및 API 설계
* **서버–모바일 앱 간 데이터 연동 구현**
* 시스템 통합 및 디버깅

---

## ⚙️ Tech Stack

### 🔌 Hardware
<img width="629" height="650" alt="Image" src="https://github.com/user-attachments/assets/89adc381-692c-4f7b-91f0-575d7a3c2ccf" />

* Arduino
* Raspberry Pi
* DS18B20 (수온 센서)
* 혼탁도 센서
* 릴레이 모듈
* 서보모터 (먹이 급여기)

### 💻 Software

* **Python (Flask)** – 서버
* **Arduino C/C++** – 센서 제어
* **Raspberry Pi GPIO**
* **MIT App Inventor (앱 개발은 팀원 담당)**

---

## 📱 Mobile App Integration

### 역할

* 서버 API와 연동하여 데이터 송수신 처리
* 앱을 통한 기기 제어 및 상태 확인 가능하도록 구현

### 주요 기능

* 센서 데이터 확인 (수온, 수질)
* 기기 ON/OFF 제어
* 자동 모드 설정 (시간 / 온도 기반)
* 실시간 영상 확인

👉 **앱 자체 개발이 아닌, 서버와의 연동 및 시스템 통합을 담당**

---

## 🧠 System Architecture

```bash
Arduino → Raspberry Pi → Server → Mobile App
         ↑                ↓
      Sensor Data     Control Command
```

---

## 🚀 Key Features

* 실시간 센서 모니터링
* 원격 제어 시스템
* 자동화 기능 (온도 / 시간 기반)
* 서버 기반 데이터 관리

---

## 🚧 Challenges & Solutions

### ⚠️ 서버 다운 문제

* MySQL → JSON 구조 변경으로 안정성 확보

### ⚠️ 전원 문제

* Raspberry Pi / Arduino 전원 분리 설계

### ⚠️ 방수 문제

* 다중 마감 처리로 누수 해결

### ⚠️ 데이터 동기화 문제

* 서버–라즈베리파이 간 지속적 동기화 구조 설계

---
### Video
https://youtu.be/LjHPsyLE9ms

## 📊 Result

* IoT 기반 어항 자동화 시스템 구현
* 서버–하드웨어–앱 연동 성공
* 안정적인 데이터 처리 및 제어 구조 구축

---

## 💡 What I Learned

* IoT 시스템 아키텍처 이해 (센서 → 서버 → 클라이언트)
* REST API 기반 통신 구조 경험
* 하드웨어–소프트웨어 통합 개발 경험
* 시스템 안정성 개선 및 문제 해결 능력

---

