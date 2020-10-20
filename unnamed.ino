long math_random_int(int a,int b) {
  if (a > b) {
    // Swap a and b to ensure a is smaller.
    int c = a;
    a = b;
    b = c;
  }
  return random(a,b);
}

void item;

void setup() {
}

void loop() {
  for (int count = 0; count < 10; count++) {
    item += String(math_random_int(1, 100));
  }

}
