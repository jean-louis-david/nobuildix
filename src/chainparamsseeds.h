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
    0x01, 0x04, 0xAC, 0x10, 0x00, 0x02, 0x92, 0x1F  // New IP: 172.16.0.2:37355
};

#endif // BITCOIN_CHAINPARAMSSEEDS_H
