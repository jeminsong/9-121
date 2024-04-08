// Jemin Song
// CPSC 121L-02
// 03/25/24
// jeminsong0119@csu.fullerton.edu
// @jeminsong
// Lab 9-2

#pragma once

#include <iostream>
#include <memory>
#include <vector>

#include "message.h"

class Phone {
 public:
  Phone(const std::string& owner) : owner_(owner) {}

  std::string GetOwner() const;

  std::shared_ptr<Message> AuthorMessage(const std::string& message);
  void AcceptMessage(std::shared_ptr<Message> message);
  void PrintMessages() const;

 private:
  std::string owner_;
  std::vector<std::shared_ptr<Message>> messages_;
};