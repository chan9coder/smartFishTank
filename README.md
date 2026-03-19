# 🐟 Smart Aquarium IoT System

## 📌 Project Summary

IoT 기반 스마트 어항 시스템으로, **원격으로 어항 상태를 모니터링하고 제어할 수 있는 통합 플랫폼**을 개발한 프로젝트입니다.

센서 데이터 수집부터 서버, 앱, 하드웨어 제어까지 연결하여
**실시간 모니터링 + 자동화 제어 시스템**을 구현했습니다.

---

## 🧑‍💻 My Role

(👉 필요하면 네 역할 맞게 커스터마이징 가능)

* Arduino 센서 데이터 처리 및 통신 구현
* Raspberry Pi 기반 제어 로직 개발
* 서버–클라이언트 데이터 연동 구조 설계
* 시스템 통합 및 디버깅

---

## ⚙️ Tech Stack

### 🔌 Hardware

* Arduino
* Raspberry Pi
* 수온 센서 (DS18B20)
* 혼탁도 센서
* 초음파 센서
* 릴레이 모듈 (220V 제어)
* 서보모터 (먹이 급여기)

### 💻 Software

* **Python (Flask)** – 서버 구축
* **Arduino C/C++** – 센서 제어
* **Raspberry Pi (GPIO 제어)**
* **App Inventor** – 모바일 앱

---

## 🧠 System Architecture

```
Arduino → Raspberry Pi → Server → Mobile App
         ↑                ↓
      Sensor Data     Control Command
```

* Arduino: 센서 데이터 수집
* Raspberry Pi: 데이터 처리 및 기기 제어
* Server: 데이터 저장 및 API 제공
* App: 사용자 인터페이스 및 원격 제어

---

## 🚀 Key Features

### 1. Real-time Monitoring

* 수온 및 수질(혼탁도) 실시간 확인
* 앱에서 상태 확인 가능

### 2. Remote Control

* 조명, 펌프, 히터 ON/OFF 제어
* 인터넷 연결 시 어디서든 제어 가능

### 3. Automatic System

* 설정 시간 기반 자동 먹이 급여
* 목표 온도 유지 자동 제어

### 4. Live Streaming

* 웹캠 기반 실시간 영상 확인

---

## 🏗️ Implementation Details

### 🔄 Data Communication

* Arduino → Raspberry Pi: 시리얼 통신
* Raspberry Pi ↔ Server: HTTP 통신
* Server: JSON 기반 데이터 관리

### 🌐 Server

* Flask 기반 REST API 서버 구축
* 센서 데이터 저장 및 상태 관리
* 클라이언트 요청에 따른 기기 제어

---

## 🚧 Challenges & Solutions

### ⚠️ 1. 서버 다운 문제

* **문제**: MySQL 기반 구조에서 실시간 동기화 중 서버 다운 발생
* **해결**:

  * JSON 파일 기반 데이터 저장 방식으로 변경
  * 서버 안정성 확보

---

### ⚠️ 2. 전원 문제 (과전압 / 셧다운)

* **문제**: Raspberry Pi 단일 전원 사용 시 시스템 다운
* **해결**:

  * Arduino / Raspberry Pi 전원 분리 설계
  * 릴레이 기반 전력 제어 구조 개선

---

### ⚠️ 3. 방수 설계 실패

* **문제**: 초기 설계에서 누수 발생
* **해결**:

  * 실리콘 + 방수 테이프 + 다중 마감 적용
  * 최종적으로 완전 방수 성공

---

### ⚠️ 4. 하드웨어 제작 제약

* **문제**: 3D 프린터 사용 불가
* **해결**:

  * 아크릴 기반 모듈형 구조로 설계 변경
  * 유지보수 및 조립성 개선

---

## 📊 Result

* IoT 기반 스마트 어항 시스템 구현 완료
* 센서 데이터 기반 자동화 제어 성공
* 앱–서버–하드웨어 연동 시스템 구축

👉 단순 구현이 아닌 **End-to-End IoT 시스템 개발 경험 확보**

---

## 💡 What I Learned

* IoT 아키텍처 전반 (센서 → 서버 → 앱)
* 실시간 데이터 처리 및 동기화 구조 이해
* 하드웨어-소프트웨어 통합 설계 경험
* 장애 대응 및 시스템 안정성 개선 경험

---

## 📷 Demo / Images

(👉 여기 영상 넣으면 포트폴리오 완성도 급상승)

---

## 📁 Repository Structure

```bash
├── arduino/       # 센서 제어 코드
├── raspberrypi/   # 제어 및 통신 코드
├── server/        # Flask 서버
├── app/           # 앱 인벤터 프로젝트
├── hardware/      # 설계 및 회로
└── README.md
```
