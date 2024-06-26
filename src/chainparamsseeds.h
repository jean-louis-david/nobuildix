#ifndef BITCOIN_CHAINPARAMSSEEDS_H
#define BITCOIN_CHAINPARAMSSEEDS_H

/**
 * List of fixed seed nodes for the network
 * AUTOGENERATED by contrib/seeds/generate-seeds.py
 *
 * Each line contains a BIP155 serialized (networkID, addr, port) tuple.
 */
static const uint8_t chainparams_seed_main[] = {
    0x01, 0x04, 0xAC, 0x10, 0x00, 0x02, 0x92, 0x1E  // New IP: 172.16.0.2:37354
};

static const uint8_t chainparams_seed_test[] = {
    0x01, 0x10, 0x54, 0x2E, 0xFE, 0x85, 0xC9, 0x02,  
    0x01, 0x10, 0xB0, 0x58, 0x15, 0x2A, 0xC9, 0x02, 
    0x01, 0x10, 0xC2, 0xA3, 0x8C, 0x72, 0xC9, 0x02   
};

#endif // BITCOIN_CHAINPARAMSSEEDS_H
