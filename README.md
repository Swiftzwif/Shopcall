# ShopCall Prototype

Industrial IoT communication system for construction sites using ESP32 microcontrollers.

## Current Status: Learning Phase - v0.1

Basic button prototype demonstrating core input/output functionality.

### What It Does
- Physical button press detection (GPIO 32)
- LED output control (GPIO 2)
- Serial monitor feedback: "button pressed"
- 200ms response delay

### Hardware
- ESP32 WROOM-32 Dev Board
- Push button (GPIO 32)
- LED (GPIO 2)
- Basic breadboard circuit

### The Vision: ShopCall
ShopCall will be a wireless call button system for construction sites:
- **Red Button**: Emergency/Safety issues
- **Yellow Button**: Materials needed
- **Blue Button**: Maintenance/tools
- **Green Button**: Quality check needed

Workers press a button → Supervisor gets instant notification on their shopcall also phone with additional details.

### Next Development Steps
1. ESP-NOW wireless communication between two boards
2. Multi-button prototype (4 colors)
3. Mobile app for supervisor notifications
4. Range testing on actual construction sites
5. Battery power optimization

## Why This Matters
Electricians and construction workers waste 15-30 minutes per day walking around job sites to find supervisors or request materials. ShopCall eliminates that wasted time.

**Target Market**: Electrical contractors, general contractors, commercial construction

**Business Model**: Hardware sales + cloud monitoring subscription

## Development Log
- Twitter: [@myswiftnet](https://twitter.com/myswiftnet) (coming soon)
- Blog: [myswiftnet.com/blog](https://myswiftnet.com) (coming soon)

## About Me
I'm J, an apprentice electrician at SwiftNet Solutions with 4,800+ hours of field experience. I'm building ShopCall because I've lived the problem on job sites every day.

## License
MIT License
