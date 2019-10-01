Line 235: ProtDisc: %d
Line 261: LLGMM_TRIGGER_IND received in GMM_SUSPENDED state...
Line 263: ...processing according to pre-suspension state of %s
Line 297: No specific actions on transmission of %s...
Line 305: LLGMM_TRIGGER_IND containing unmatched PduId in GMM_DEREGISTERED
Line 338: READY timer is deactivated and shall run without expiry
Line 345: Network has forced MS to STANDBY state -> READY timer not started
Line 359: PDP Context Status is %d %d
Line 370: READY timer (re)started
Line 416: No specific actions on transmission failure of %s...
Line 424: LLGMM_STATUS_IND containing unmatched PduId in GMM_DEREGISTERED...
Line 472: LLGMM_STATUS_IND containing unmatched PduId, GPRS attach fail actions not performed...
Line 494: Lower layer failure during GPRS detach procedure for IMSI only...
Line 506: LLGMM_STATUS_IND indicating GMM PDU transmission failure before DETACH_REQUEST transmission attempt, no actions performed...
Line 512: LLGMM_STATUS_IND containing unmatched PduId or corresponds to a non-GMM SAPI-1 PDU, no actions performed...
Line 545: Reject UE Pending Req because RAU Failed due to Lower Layer Failure.
Line 571: LLGMM_STATUS_IND containing unmatched PduId, RAU fail actions not performed...
Line 591: Lower layer failure during GPRS detach procedure...
Line 636: LLGMM_STATUS_IND indicating GMM PDU transmission failure before DETACH_REQUEST transmission attempt, no actions performed...
Line 642: LLGMM_STATUS_IND containing unmatched PduId, no actions performed...
Line 667: Cause = %s
Line 696: LLGMM_STATUS_IND received for authenticaiton or identity message, do not abort the complete procedure
Line 723: LLGMM_STATUS_IND received in GMM_SUSPENDED state...
Line 726: ...processing according to pre-suspension state of %s
Line 756: Perform TbfRelAction, MM_COORD_TBF_REL_ACTION
Line 775: Perform TbfRelAction, MM_COORD_TBF_REL_ACTION
Line 842: GPRS attach / RAU procedure completed, start DRX and resume LLC...
Line 871: Received ACK For RAU/ATTACH COMPLETE So Stop Timer and Set the State
Line 931: Performing actions following DETACH_REQUEST transmission (or failure)...
Line 961: Indication of GPRS detach procedure completion delayed until reception of RLC_GMM_SAPI_ONE_TX_COMPLETE...
Line 994: GMM_DETACH_TRY_TIMER not running on LLC indication of DETACH_REQUEST transmission, no actions performed...
Line 1013: Performing actions following DETACH_ACCEPT transmission (or failure)...
Line 1068: SAPI-1 Tx table entry %d has been reserved with PduId %04X...
Line 1073: ...for transmission of %s message
Line 1078: ...for transmission of a non-GMM message
Line 1084: ERROR: Table is already full...
Line 1111: PduId %04X confirmed as entry %d in SAPI-1 Tx table
Line 1121: ERROR: PduId %04X does NOT match appropriate table entry...
Line 1127: ERROR: PduId submitted for confirmation has the value NOT_SAPI1_PDU...
Line 1150: Checking SAPI-1 Tx table for PduId match...
Line 1155: PduId 0x%04X matched...
Line 1164: ...corresponding to %s
Line 1169: ...corresponding to a non-GMM SAPI-1 PDU
Line 1174: ERROR: PduId 0x%04X does not match that of first active entry...
Line 1180: PduId 0x%04X matched...
Line 1188: ...corresponding to %s
Line 1193: ...corresponding to a non-GMM SAPI-1 PDU
Line 1202: PduId -> NOT_SAPI1_PDU
Line 1222: First active entry removed from the SAPI-1 Tx table...
Line 1234: PduId %04X does not match first active entry in the SAPI-1 Tx table...
Line 1241:  active entry matched in  the SAPI-1 Tx table at %d
Line 1297: %s currently occupies position %d in the SAPI-1 Tx table...
Line 1322: Flushing the following %d active entries from the SAPI-1 submit table...
Line 1325: -------------
Line 1340: No active entries to flush from the SAPI-1 submit table...
Line 1354: Entry number %d corresponds to PduId = %04X
Line 1359:  ==> GMM PDU
Line 1360:  ==> %s
Line 1364:  ==> Non-GMM PDU
Line 1367: -------------
Line 1379: mm_AssignNewTlli:
Line 1422: mm_AssignNewAndOldTlli:
Line 1437: mm_OldTlliType = %s, mm_TlliOld = %02X %02X %02X %02X
Line 1441: mm_CurrentTlliType = %s, mm_Tlli = %02X %02X %02X %02X
Line 1456: mm_UnassignTlli:
Line 1606: ERROR: ReqdTlliType is not GMM_LOCAL_TLLI or GMM_FOREIGN_TLLI...
Line 1614: TLLI change reqd for RAU procedure as P-TMSI has changed since previous TLLI assignment to LLC...
Line 1626: TLLI assignment/change reqd for RAU procedure as TLLI assigned to LLC not of reqd type...
Line 1653: mm_DecodeLlGmmUnitDataIndMsg:
Line 1667: 
Line 1716: Invalid SMS Protocol Discriminator. No SMS Msg in GSM / GPRS to GMM !
Line 1724: Invalid ProtocolDisc (0x%x) in mm_DecodeLlGmmUnitDataIndMsg
Line 1737: No action required in this State in mm_DecodeLlGmmUnitDataIndMsg
Line 1745: Invalid mm_GmmState in mm_DecodeLlGmmUnitDataIndMsg
Line 1817: GS31(SM/SMS/SS): ucTransactionID = 0x%02X, ucProtocol =%s, ucSendSeqNum =0x%02X
Line 1818: GS31(SM/SMS/SS): ucMessageType =0x%02X, ucChannel =0x%02X
Line 1819: GS31(SM/SMS/SS): Raw data length =%d
Line 1834: 
Line 1836: Cipher = %s
Line 1838: PduId = 0x%04X
Line 1880: 
Line 1929: LLC requested to suspend....
Line 1937: LLC is already suspended....
Line 1978: LLC Resumption is avoided as current Operating mode is MM_MOBILE_CLASS_C_CS
Line 1987: LLC requested to resume....
Line 2000: Cant Resume LLC At this Time Ignored
Line 2005: LLC is not suspended....
Line 2063: 
Line 2249: ERROR: Invalid NewTlliType in mm_SetNewTlli....
Line 2300: mm_Tlli = %02X %02X %02X %02X
Line 2318: mm_TlliOld = %02X %02X %02X %02X
Line 2336: mm_CurrentTlliType = %s
Line 2349: mm_OldTlliType = %s
Line 2385: Cause -> %s
Line 2441: IsCrcFailure -> %d