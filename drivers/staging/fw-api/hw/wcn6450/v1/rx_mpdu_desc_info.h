
/*
 * Copyright (c) 2023 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */



#ifndef _RX_MPDU_DESC_INFO_H_
#define _RX_MPDU_DESC_INFO_H_
#if !defined(__ASSEMBLER__)
#endif

#define NUM_OF_DWORDS_RX_MPDU_DESC_INFO 2

struct rx_mpdu_desc_info {
             uint32_t msdu_count                      :  8,
                      mpdu_sequence_number            : 12,
                      fragment_flag                   :  1,
                      mpdu_retry_bit                  :  1,
                      ampdu_flag                      :  1,
                      bar_frame                       :  1,
                      pn_fields_contain_valid_info    :  1,
                      sa_is_valid                     :  1,
                      sa_idx_timeout                  :  1,
                      da_is_valid                     :  1,
                      da_is_mcbc                      :  1,
                      da_idx_timeout                  :  1,
                      raw_mpdu                        :  1,
                      more_fragment_flag              :  1;
             uint32_t peer_meta_data                  : 32;
};

#define RX_MPDU_DESC_INFO_0_MSDU_COUNT_OFFSET                        0x00000000
#define RX_MPDU_DESC_INFO_0_MSDU_COUNT_LSB                           0
#define RX_MPDU_DESC_INFO_0_MSDU_COUNT_MASK                          0x000000ff

#define RX_MPDU_DESC_INFO_0_MPDU_SEQUENCE_NUMBER_OFFSET              0x00000000
#define RX_MPDU_DESC_INFO_0_MPDU_SEQUENCE_NUMBER_LSB                 8
#define RX_MPDU_DESC_INFO_0_MPDU_SEQUENCE_NUMBER_MASK                0x000fff00

#define RX_MPDU_DESC_INFO_0_FRAGMENT_FLAG_OFFSET                     0x00000000
#define RX_MPDU_DESC_INFO_0_FRAGMENT_FLAG_LSB                        20
#define RX_MPDU_DESC_INFO_0_FRAGMENT_FLAG_MASK                       0x00100000

#define RX_MPDU_DESC_INFO_0_MPDU_RETRY_BIT_OFFSET                    0x00000000
#define RX_MPDU_DESC_INFO_0_MPDU_RETRY_BIT_LSB                       21
#define RX_MPDU_DESC_INFO_0_MPDU_RETRY_BIT_MASK                      0x00200000

#define RX_MPDU_DESC_INFO_0_AMPDU_FLAG_OFFSET                        0x00000000
#define RX_MPDU_DESC_INFO_0_AMPDU_FLAG_LSB                           22
#define RX_MPDU_DESC_INFO_0_AMPDU_FLAG_MASK                          0x00400000

#define RX_MPDU_DESC_INFO_0_BAR_FRAME_OFFSET                         0x00000000
#define RX_MPDU_DESC_INFO_0_BAR_FRAME_LSB                            23
#define RX_MPDU_DESC_INFO_0_BAR_FRAME_MASK                           0x00800000

#define RX_MPDU_DESC_INFO_0_PN_FIELDS_CONTAIN_VALID_INFO_OFFSET      0x00000000
#define RX_MPDU_DESC_INFO_0_PN_FIELDS_CONTAIN_VALID_INFO_LSB         24
#define RX_MPDU_DESC_INFO_0_PN_FIELDS_CONTAIN_VALID_INFO_MASK        0x01000000

#define RX_MPDU_DESC_INFO_0_SA_IS_VALID_OFFSET                       0x00000000
#define RX_MPDU_DESC_INFO_0_SA_IS_VALID_LSB                          25
#define RX_MPDU_DESC_INFO_0_SA_IS_VALID_MASK                         0x02000000

#define RX_MPDU_DESC_INFO_0_SA_IDX_TIMEOUT_OFFSET                    0x00000000
#define RX_MPDU_DESC_INFO_0_SA_IDX_TIMEOUT_LSB                       26
#define RX_MPDU_DESC_INFO_0_SA_IDX_TIMEOUT_MASK                      0x04000000

#define RX_MPDU_DESC_INFO_0_DA_IS_VALID_OFFSET                       0x00000000
#define RX_MPDU_DESC_INFO_0_DA_IS_VALID_LSB                          27
#define RX_MPDU_DESC_INFO_0_DA_IS_VALID_MASK                         0x08000000

#define RX_MPDU_DESC_INFO_0_DA_IS_MCBC_OFFSET                        0x00000000
#define RX_MPDU_DESC_INFO_0_DA_IS_MCBC_LSB                           28
#define RX_MPDU_DESC_INFO_0_DA_IS_MCBC_MASK                          0x10000000

#define RX_MPDU_DESC_INFO_0_DA_IDX_TIMEOUT_OFFSET                    0x00000000
#define RX_MPDU_DESC_INFO_0_DA_IDX_TIMEOUT_LSB                       29
#define RX_MPDU_DESC_INFO_0_DA_IDX_TIMEOUT_MASK                      0x20000000

#define RX_MPDU_DESC_INFO_0_RAW_MPDU_OFFSET                          0x00000000
#define RX_MPDU_DESC_INFO_0_RAW_MPDU_LSB                             30
#define RX_MPDU_DESC_INFO_0_RAW_MPDU_MASK                            0x40000000

#define RX_MPDU_DESC_INFO_0_MORE_FRAGMENT_FLAG_OFFSET                0x00000000
#define RX_MPDU_DESC_INFO_0_MORE_FRAGMENT_FLAG_LSB                   31
#define RX_MPDU_DESC_INFO_0_MORE_FRAGMENT_FLAG_MASK                  0x80000000

#define RX_MPDU_DESC_INFO_1_PEER_META_DATA_OFFSET                    0x00000004
#define RX_MPDU_DESC_INFO_1_PEER_META_DATA_LSB                       0
#define RX_MPDU_DESC_INFO_1_PEER_META_DATA_MASK                      0xffffffff

#endif
