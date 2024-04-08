// Jemin Song
// CPSC 121L-02
// 03/25/24
// jeminsong0119@csu.fullerton.edu
// @jeminsong
// Lab 9-2

#pragma once

#include <map>
#include <memory>

#include "message.h"
#include "phone.h"

class Network {
 public:
  void AddPhone(std::shared_ptr<Phone> phone);

  void SendMessage(std::shared_ptr<Message> message,
                   const std::string& recipient);

  void SendMessage(std::shared_ptr<Message> message,
                   const std::vector<std::string>& recipients);

 private:
  std::map<std::string, std::shared_ptr<Phone>> phonebook_;
};