# ShopCall Prototype

Industrial IoT communication system for construction sites using ESP32 microcontrollers.

## Current Status: v0.1 - Basic Button Prototype

Learning ESP32 hardware and building foundation for wireless communication system.

### What It Does
- Physical button press detection (GPIO 32)
- LED visual feedback (GPIO 2)
- Serial monitor output for debugging
- 200ms response time, 50ms debounce

### Hardware
- ESP32 WROOM-32 Dev Board
- Push button (GPIO 32 with internal pull-up)
- Built-in LED (GPIO 2)

### The Vision: ShopCall
Wireless call button system for construction sites:
- **Red Button**: Emergency/Safety
- **Yellow Button**: Materials needed
- **Blue Button**: Maintenance/tools  
- **Green Button**: Quality check

Workers press button → Supervisor gets instant phone notification.

### Why This Matters
Construction workers waste 15-30 min/day walking around job sites to find supervisors or request materials. ShopCall eliminates that wasted time.

**Target Market**: Electrical contractors, general contractors, commercial construction

**Business Model**: Hardware sales + cloud monitoring subscription

### Next Development Steps
1. ESP-NOW wireless communication between two boards
2. Multi-button prototype (4 colors)
3. Mobile app for supervisor notifications
4. Range testing on construction sites
5. Battery power and enclosure design

## Development Log
- **Website**: [myswiftnet.com](https://myswiftnet.com)
- **Twitter**: [@myswiftnet](https://twitter.com/myswiftnet)

## About
I'm J, an apprentice electrician at SwiftNet Solutions with 4,800+ hours of field experience. Building ShopCall because I've lived the problem on job sites every day.

## License
MIT License
