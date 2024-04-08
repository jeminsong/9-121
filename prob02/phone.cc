// Jemin Song
// CPSC 121L-02
// 03/25/24
// jeminsong0119@csu.fullerton.edu
// @jeminsong
// Lab 9-2
#include "phone.h"

std::string Phone::GetOwner() const { return owner_; }

std::shared_ptr<Message> Phone::AuthorMessage(const std::string& message) {
  return std::make_shared<Message>(message, owner_);
}

void Phone::AcceptMessage(std::shared_ptr<Message> message) {
  messages_.push_back(message);
}

void Phone::PrintMessages() const {
  for (const auto& message : messages_) {
    std::cout << message->GetSender() << ": " << message->GetMessage()
              << std::endl;
  }
}