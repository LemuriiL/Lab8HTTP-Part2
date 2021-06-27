// Copyright 2021 LemuriiL <nice.duble@mail.ru>
#include <Client.hpp>

int main(int argc, [[maybe_unused]] char **argv) {
  Client A(argc, argv);
  return A.clientRequest();
}
