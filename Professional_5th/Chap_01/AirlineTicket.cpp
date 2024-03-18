export module airline_ticket;

#include <string>

export class AirlineTicket
{
private:
  std::string m_passengerName;
  int m_numberOfMiles;
  bool m_hasEliteSuperRewardsStatus;
public:
  AirlineTicket();
  ~AirlineTicket();
};

AirlineTicket::AirlineTicket() : m_passengerName{"un"}, m_numberOfMiles{0}, m_hasEliteSuperRewardsStatus{false}{};
AirlineTicket::AirlineTicket()
{
  m_passengerName = "to";
  m_numberOfMiles = 0;
  m_hasEliteSuperRewardsStatus =false;
}

