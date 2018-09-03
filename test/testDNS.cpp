/**
 *  Test for HTTP protocol.
 **/
#include "common.h"

TEST(DNSTest, DeprecatedCalls) {
    std::vector<uint> tcpProtocols;
    std::vector<uint> udpProtocols;
    getProtocolsOld("./pcaps/http.cap", tcpProtocols, udpProtocols);
    EXPECT_EQ(udpProtocols[DPI_PROTOCOL_UDP_DNS], (uint) 2);
    getProtocolsOld("./pcaps/smtp.pcap", tcpProtocols, udpProtocols);
    EXPECT_EQ(udpProtocols[DPI_PROTOCOL_UDP_DNS], (uint) 2);
    getProtocolsOld("./pcaps/ntp.pcap", tcpProtocols, udpProtocols);
    EXPECT_EQ(udpProtocols[DPI_PROTOCOL_UDP_DNS], (uint) 2);
    getProtocolsOld("./pcaps/sip-rtp.pcap", tcpProtocols, udpProtocols);
    EXPECT_EQ(udpProtocols[DPI_PROTOCOL_UDP_DNS], (uint) 357);
    getProtocolsOld("./pcaps/skype-irc.cap", tcpProtocols, udpProtocols);
    EXPECT_EQ(udpProtocols[DPI_PROTOCOL_UDP_DNS], (uint) 707);
}


TEST(DNSTest, Generic) {
    std::vector<uint> protocols;
    getProtocols("./pcaps/http.cap", protocols);
    EXPECT_EQ(protocols[DPI_PROTOCOL_DNS], (uint) 2);
    getProtocols("./pcaps/smtp.pcap", protocols);
    EXPECT_EQ(protocols[DPI_PROTOCOL_DNS], (uint) 2);
    getProtocols("./pcaps/ntp.pcap", protocols);
    EXPECT_EQ(protocols[DPI_PROTOCOL_DNS], (uint) 2);
    getProtocols("./pcaps/sip-rtp.pcap", protocols);
    EXPECT_EQ(protocols[DPI_PROTOCOL_DNS], (uint) 357);
    getProtocols("./pcaps/skype-irc.cap", protocols);
    EXPECT_EQ(protocols[DPI_PROTOCOL_DNS], (uint) 707);
    getProtocols("./pcaps/whatsapp.pcap", protocols);
    EXPECT_EQ(protocols[DPI_PROTOCOL_DNS], (uint) 10);
    getProtocols("./pcaps/6in4tunnel.pcap", protocols);
    EXPECT_EQ(protocols[DPI_PROTOCOL_DNS], (uint) 4);
    getProtocols("./pcaps/dropbox.pcap", protocols);
    EXPECT_EQ(protocols[DPI_PROTOCOL_DNS], (uint) 24);
    getProtocols("./pcaps/spotify.pcapng", protocols);
    EXPECT_EQ(protocols[DPI_PROTOCOL_DNS], (uint) 14);
}
