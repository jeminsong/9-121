// Jemin Song
// CPSC 121L-02
// 03/25/24
// jeminsong0119@csu.fullerton.edu
// @jeminsong
// Lab 9-2

#include "network.h"

void Network::AddPhone(std::shared_ptr<Phone> phone) {
  phonebook_[phone->GetOwner()] = phone;
}

void Network::SendMessage(std::shared_ptr<Message> message,
                          const std::string& recipient) {
  auto it = phonebook_.find(recipient);
  if (it != phonebook_.end()) {
    it->second->AcceptMessage(message);
  }
}

void Network::SendMessage(std::shared_ptr<Message> message,
                          const std::vector<std::string>& recipients) {
  for (const auto& recipient : recipients) {
    SendMessage(message, recipient);
  }
}