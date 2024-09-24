#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(1000);  
  Serial.println("Xin chào từ ESP8266");
}

void loop() {
  // Kiểm tra nếu có dữ liệu từ HF211
  if (Serial.available()) {
    // Đọc toàn bộ dữ liệu nhận được cho đến khi gặp ký tự xuống dòng
     String  data = Serial.readStringUntil('\n');
    //  Serial.println();
    // Xử lý dữ liệu nhận được nếu cần
      Serial.println("Nhận từ Máy tính: " );
      Serial.println(data);
    // Gửi lại dữ liệu phản hồi
      Serial.println("Gửi đi từ ESP8266: " + data);
  }

  delay(1000);  // Kiểm tra dữ liệu mỗi giây
}