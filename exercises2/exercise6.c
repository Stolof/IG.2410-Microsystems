/* This calls itself recursively and when reaching 0 it returns */

void croissRec(int a) {
  if (a==0) {
      return;
  } else {
    croissRec(a-1);
    printf("%d\n", a);
  }
}

int main(int argc, char const *argv[]) {
  croissRec(10);
  return 0;
}
