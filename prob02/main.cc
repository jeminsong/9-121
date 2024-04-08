// Jemin Song
// CPSC 121L-02
// 03/25/24
// jeminsong0119@csu.fullerton.edu
// @jeminsong
// Lab 9-2

#include <iostream>
#include <memory>

#include "network.h"
#include "phone.h"

int main() {
  Network csuf_network;

  std::shared_ptr<Phone> phone1 = std::make_shared<Phone>("Anna");
  std::shared_ptr<Phone> phone2 = std::make_shared<Phone>("Raf");
  std::shared_ptr<Phone> phone3 = std::make_shared<Phone>("JC");

  csuf_network.AddPhone(phone1);
  csuf_network.AddPhone(phone2);
  csuf_network.AddPhone(phone3);

  csuf_network.SendMessage(phone1->AuthorMessage("Sup"), "Raf");

  csuf_network.SendMessage(phone2->AuthorMessage("Lol"), "Anna");

  std::vector<std::string> jcs_class = {"Anna", "Raf"};
  csuf_network.SendMessage(phone3->AuthorMessage("Hi class!"), jcs_class);

  csuf_network.SendMessage(phone1->AuthorMessage("Hi Prof!"), "JC");

  csuf_network.SendMessage(phone2->AuthorMessage("help how do C++"), "JC");

  std::cout << "Printing messages sent to Anna:" << std::endl;
  phone1->PrintMessages();

  std::cout << "\nPrinting messages sent to Raf:" << std::endl;
  phone2->PrintMessages();

  std::cout << "\nPrinting messages sent to JC:" << std::endl;
  phone3->PrintMessages();

  return 0;
}