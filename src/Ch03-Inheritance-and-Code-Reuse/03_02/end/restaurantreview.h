#ifndef RESTAURANT_REVIEW_H
#define RESTAURANT_REVIEW_H

#include <iostream>
#include "review.h"

class RestaurantReview : public Review
{
public:
  RestaurantReview(unsigned int r,
                   const std::string &t,
                   const std::string &txt,
                   const std::string &type,
                   bool delivery);

  ~RestaurantReview();
  void displayDetails() const;

  std::string getCuisine() const { return cuisine; }
  bool getHasDelivery() const { return hasDelivery; }

  void setCuisine(const std::string &type);
  void setHasDelivery(bool delivery);

protected:
  std::string validateAndTrim(const std::string &str,
                              unsigned int maxLength,
                              const std::string &fieldName) const;

private:
  static const unsigned int MAX_CUISINE_LENGTH = 128;

  // Restaurant-specific members
  std::string cuisine;
  bool hasDelivery;
};

#endif