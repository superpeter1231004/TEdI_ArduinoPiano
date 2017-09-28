void setup() {
  pinMode(5, OUTPUT);//피에조 센서
  pinMode(A5, INPUT);//높시
  pinMode(A4, INPUT);//높라
  pinMode(A3, INPUT);//높솔
  pinMode(A2, INPUT);//높파
  pinMode(A1, INPUT);//높미
  pinMode(A0, INPUT);//높레
  pinMode(13, INPUT);//높도
  pinMode(12, INPUT);//낮시
  pinMode(11, INPUT);//낮라
  pinMode(10, INPUT);//낮솔
  pinMode(9, INPUT); //낮파
  pinMode(8, INPUT); //낮미
  pinMode(7, INPUT); //낮레
  pinMode(6, INPUT); //낮도
  void loop() {
    if (digitalRead(6) == HIGH) {  //낮도
      tone (5, 262);
    }
    if (digitalRead(7) == HIGH) {  //낮레
      tone (5, 294);
    }
    if (digitalRead(8) == HIGH) {  //낮미
      tone (5, 330 );
    }
    if (digitalRead(9) == HIGH) {  //낮파
      tone (5, 349 );
    }
    if (digitalRead(10) == HIGH) { //낮솔
      tone (5, 392);
    }
    if (digitalRead(11) == HIGH) { //낮라
      tone (5, 440 );
    }
    if (digitalRead(12) == HIGH) { //낮시
      tone (5, 494 );
    }
    if (digitalRead(13) == HIGH) { //높도
      tone (5, 523 );
    }
    if (digitalRead(A0) == HIGH) { //높레
      tone (5, 587);
    }
    if (digitalRead(A1) == HIGH) { //높미
      tone (5, 659 );
    }
    if (digitalRead(A2) == HIGH) { //높파
      tone (5, 698 );
    }
    if (digitalRead(A3) == HIGH) { //높솔
      tone (5, 784);
    }
    if (digitalRead(A4) == HIGH) { //높라
      tone (5, 880);
    }
    if (digitalRead(A5) == HIGH) { //높시
      tone (5, 988);
    }
    else {
      noTone(5);
    }

  }


