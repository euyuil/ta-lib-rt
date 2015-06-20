/* TA-LIB Copyright (c) 1999-2008, Mario Fortier
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither name of author nor the names of its contributors
 *   may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* List of contributors:
 *
 *  Initial  Name/description
 *  -------------------------------------------------------------------
 *  AC       Angelo Ciceri
 *
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  010605 AC   Creation           
 *
 */

/**** START GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
/* All code within this section is automatically
 * generated by gen_code. Any modification will be lost
 * next time gen_code is run.
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */    #include "TA-Lib-Core.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode::InternalError)
/* Generated */    namespace TicTacTec { namespace TA { namespace Library {
/* Generated */ #elif defined( _JAVA )
/* Generated */    #include "ta_defs.h"
/* Generated */    #include "ta_java_defs.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode.InternalError)
/* Generated */ #else
/* Generated */    #include <string.h>
/* Generated */    #include <math.h>
/* Generated */    #include "ta_func.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_UTILITY_H
/* Generated */    #include "ta_utility.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_MEMORY_H
/* Generated */    #include "ta_memory.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #define TA_PREFIX(x) TA_##x
/* Generated */ #define INPUT_TYPE   double
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlBeltHoldLookback( void )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlBeltHoldLookback(  )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLBELTHOLD_Lookback( void )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ /* No parameters to validate. */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
    return max( TA_CANDLEAVGPERIOD(BodyLong), TA_CANDLEAVGPERIOD(ShadowVeryShort) );
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_CDLBELTHOLD - Belt-hold
 * 
 * Input  = Open, High, Low, Close
 * Output = int
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::CdlBeltHold( int    startIdx,
/* Generated */                                             int    endIdx,
/* Generated */                                             SubArray<double>^ inOpen,
/* Generated */                                             SubArray<double>^ inHigh,
/* Generated */                                             SubArray<double>^ inLow,
/* Generated */                                             SubArray<double>^ inClose,
/* Generated */                                             [Out]int%    outBegIdx,
/* Generated */                                             [Out]int%    outNBElement,
/* Generated */                                             SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::CdlBeltHold( int    startIdx,
/* Generated */                                             int    endIdx,
/* Generated */                                             cli::array<double>^ inOpen,
/* Generated */                                             cli::array<double>^ inHigh,
/* Generated */                                             cli::array<double>^ inLow,
/* Generated */                                             cli::array<double>^ inClose,
/* Generated */                                             [Out]int%    outBegIdx,
/* Generated */                                             [Out]int%    outNBElement,
/* Generated */                                             cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlBeltHold( int    startIdx,
/* Generated */                             int    endIdx,
/* Generated */                             double       inOpen[],
/* Generated */                             double       inHigh[],
/* Generated */                             double       inLow[],
/* Generated */                             double       inClose[],
/* Generated */                             MInteger     outBegIdx,
/* Generated */                             MInteger     outNBElement,
/* Generated */                             int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDLBELTHOLD( int    startIdx,
/* Generated */                                       int    endIdx,
/* Generated */                                                  const double inOpen[],
/* Generated */                                                  const double inHigh[],
/* Generated */                                                  const double inLow[],
/* Generated */                                                  const double inClose[],
/* Generated */                                                  int          *outBegIdx,
/* Generated */                                                  int          *outNBElement,
/* Generated */                                                  int           outInteger[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */
    double BodyLongPeriodTotal, ShadowVeryShortPeriodTotal;
    int i, outIdx, BodyLongTrailingIdx, ShadowVeryShortTrailingIdx, lookbackTotal;

/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outInteger )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Identify the minimum number of price bar needed
    * to calculate at least one output.
    */

   lookbackTotal = LOOKBACK_CALL(CDLBELTHOLD)();

   /* Move up the start index if there is not
    * enough initial data.
    */
   if( startIdx < lookbackTotal )
      startIdx = lookbackTotal;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   /* Do the calculation using tight loops. */
   /* Add-up the initial period, except for the last value. */
   BodyLongPeriodTotal = 0;
   BodyLongTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(BodyLong);
   ShadowVeryShortPeriodTotal = 0;
   ShadowVeryShortTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(ShadowVeryShort);
   
   i = BodyLongTrailingIdx;
   while( i < startIdx ) {
        BodyLongPeriodTotal += TA_CANDLERANGE( BodyLong, i );
        i++;
   }
   i = ShadowVeryShortTrailingIdx;
   while( i < startIdx ) {
        ShadowVeryShortPeriodTotal += TA_CANDLERANGE( ShadowVeryShort, i );
        i++;
   }

   /* Proceed with the calculation for the requested range.
    * Must have:
    * - long white (black) real body
    * - no or very short lower (upper) shadow
    * The meaning of "long" and "very short" is specified with TA_SetCandleSettings
    * outInteger is positive (1 to 100) when white (bullish), negative (-1 to -100) when black (bearish)
    */
   outIdx = 0;
   do
   {
        if( TA_REALBODY(i) > TA_CANDLEAVERAGE( BodyLong, BodyLongPeriodTotal, i ) &&             // long body
            ( 
              ( // white body and very short lower shadow
                TA_CANDLECOLOR(i) == 1 && 
                TA_LOWERSHADOW(i) < TA_CANDLEAVERAGE( ShadowVeryShort, ShadowVeryShortPeriodTotal, i ) 
              ) ||
              ( // black body and very short upper shadow
                TA_CANDLECOLOR(i) == -1 && 
                TA_UPPERSHADOW(i) < TA_CANDLEAVERAGE( ShadowVeryShort, ShadowVeryShortPeriodTotal, i )
              ) 
            ) )
            outInteger[outIdx++] = TA_CANDLECOLOR(i) * 100;
        else
            outInteger[outIdx++] = 0;
        /* add the current range and subtract the first range: this is done after the pattern recognition 
         * when avgPeriod is not 0, that means "compare with the previous candles" (it excludes the current candle)
         */
        BodyLongPeriodTotal += TA_CANDLERANGE( BodyLong, i ) - TA_CANDLERANGE( BodyLong, BodyLongTrailingIdx );
        ShadowVeryShortPeriodTotal += TA_CANDLERANGE( ShadowVeryShort, i ) 
                                    - TA_CANDLERANGE( ShadowVeryShort, ShadowVeryShortTrailingIdx );
        i++; 
        BodyLongTrailingIdx++;
        ShadowVeryShortTrailingIdx++;
   } while( i <= endIdx );

   /* All done. Indicate the output limits and return. */
   VALUE_HANDLE_DEREF(outNBElement) = outIdx;
   VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlBeltHoldStateInit( struct TA_CdlBeltHold_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlBeltHoldStateInit( struct TA_cdlBeltHold_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLBELTHOLD_StateInit( struct TA_CDLBELTHOLD_State** _state )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/

{
   /* insert local variable here */

/**** START GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    STATE = calloc(1, sizeof(struct TA_CDLBELTHOLD_State));
/* Generated */    STATE_P.mem_index = 0;
/* Generated */    #ifndef TA_CDLBELTHOLD_SUPPRESS_MEMORY_ALLOCATION
/* Generated */    MEM_SIZE_P = TA_CDLBELTHOLD_Lookback();
/* Generated */    if (MEM_SIZE_P > 0)
/* Generated */          MEM_P = calloc(MEM_SIZE_P, sizeof(struct TA_CDLBELTHOLD_Data));
/* Generated */    else
/* Generated */    #endif
/* Generated */          MEM_P = NULL;/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 6 - DO NOT DELETE THIS LINE ****/

   /* insert state init code here. */


   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlBeltHoldState( struct TA_CdlBeltHold_State* _state,
/* Generated */                           cli::array<double>^ inOpen,
/* Generated */                           cli::array<double>^ inHigh,
/* Generated */                           cli::array<double>^ inLow,
/* Generated */                           cli::array<double>^ inClose,
/* Generated */                           cli::array<int>^  *outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlBeltHoldState( struct TA_cdlBeltHold_State* _state,
/* Generated */                            double       inOpen,
/* Generated */                            double       inHigh,
/* Generated */                            double       inLow,
/* Generated */                            double       inClose,
/* Generated */                            int           *outInteger )
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLBELTHOLD_State( struct TA_CDLBELTHOLD_State* _state,
/* Generated */                                               const double inOpen,
/* Generated */                                               const double inHigh,
/* Generated */                                               const double inLow,
/* Generated */                                               const double inClose,
/* Generated */                                               int           *outInteger )
/* Generated */ #endif
/**** END GENCODE SECTION 7 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    int _cur_idx = ++STATE.mem_index % MEM_SIZE;
/* Generated */    UNUSED_VARIABLE(_cur_idx); // in case PUSHPOP ethods won't be used
/* Generated */    #ifndef TA_CDLBELTHOLD_SUPPRESS_EXIT_ON_NOT_ENOUGH_DATA
/* Generated */    if (NEED_MORE_DATA) {
/* Generated */          PUSH_TO_MEM(inOpen,inOpen);
/* Generated */          PUSH_TO_MEM(inHigh,inHigh);
/* Generated */          PUSH_TO_MEM(inLow,inLow);
/* Generated */          PUSH_TO_MEM(inClose,inClose);
/* Generated */    return ENUM_VALUE(RetCode,TA_NEED_MORE_DATA,NeedMoreData); }
/* Generated */    #endif
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outInteger )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 8 - DO NOT DELETE THIS LINE ****/

   /* insert state based TA dunc code here. */

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::CdlBeltHoldStateFree( struct TA_CdlBeltHold_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdlBeltHoldStateFree( struct TA_cdlBeltHold_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDLBELTHOLD_StateFree( struct TA_CDLBELTHOLD_State** _state )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 9 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 10 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    if (_state == NULL)
/* Generated */          return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    if (*_state != NULL) {
/* Generated */          if ((*_state)->memory != NULL) free((*_state)->memory);
/* Generated */          free(*_state); *_state = NULL;}
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 10 - DO NOT DELETE THIS LINE ****/

   /* insert state free code here. */   
   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #define  USE_SINGLE_PRECISION_INPUT
/* Generated */ #undef  TA_LIB_PRO
/* Generated */ #if !defined( _MANAGED ) && !defined( _JAVA )
/* Generated */    #undef   TA_PREFIX
/* Generated */    #define  TA_PREFIX(x) TA_S_##x
/* Generated */ #endif
/* Generated */ #undef   INPUT_TYPE
/* Generated */ #define  INPUT_TYPE float
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::CdlBeltHold( int    startIdx,
/* Generated */                                             int    endIdx,
/* Generated */                                             SubArray<float>^ inOpen,
/* Generated */                                             SubArray<float>^ inHigh,
/* Generated */                                             SubArray<float>^ inLow,
/* Generated */                                             SubArray<float>^ inClose,
/* Generated */                                             [Out]int%    outBegIdx,
/* Generated */                                             [Out]int%    outNBElement,
/* Generated */                                             SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::CdlBeltHold( int    startIdx,
/* Generated */                                             int    endIdx,
/* Generated */                                             cli::array<float>^ inOpen,
/* Generated */                                             cli::array<float>^ inHigh,
/* Generated */                                             cli::array<float>^ inLow,
/* Generated */                                             cli::array<float>^ inClose,
/* Generated */                                             [Out]int%    outBegIdx,
/* Generated */                                             [Out]int%    outNBElement,
/* Generated */                                             cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdlBeltHold( int    startIdx,
/* Generated */                             int    endIdx,
/* Generated */                             float        inOpen[],
/* Generated */                             float        inHigh[],
/* Generated */                             float        inLow[],
/* Generated */                             float        inClose[],
/* Generated */                             MInteger     outBegIdx,
/* Generated */                             MInteger     outNBElement,
/* Generated */                             int           outInteger[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_CDLBELTHOLD( int    startIdx,
/* Generated */                              int    endIdx,
/* Generated */                              const float  inOpen[],
/* Generated */                              const float  inHigh[],
/* Generated */                              const float  inLow[],
/* Generated */                              const float  inClose[],
/* Generated */                              int          *outBegIdx,
/* Generated */                              int          *outNBElement,
/* Generated */                              int           outInteger[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */     double BodyLongPeriodTotal, ShadowVeryShortPeriodTotal;
/* Generated */     int i, outIdx, BodyLongTrailingIdx, ShadowVeryShortTrailingIdx, lookbackTotal;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outInteger )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    lookbackTotal = LOOKBACK_CALL(CDLBELTHOLD)();
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    BodyLongPeriodTotal = 0;
/* Generated */    BodyLongTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(BodyLong);
/* Generated */    ShadowVeryShortPeriodTotal = 0;
/* Generated */    ShadowVeryShortTrailingIdx = startIdx - TA_CANDLEAVGPERIOD(ShadowVeryShort);
/* Generated */    i = BodyLongTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         BodyLongPeriodTotal += TA_CANDLERANGE( BodyLong, i );
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = ShadowVeryShortTrailingIdx;
/* Generated */    while( i < startIdx ) {
/* Generated */         ShadowVeryShortPeriodTotal += TA_CANDLERANGE( ShadowVeryShort, i );
/* Generated */         i++;
/* Generated */    }
/* Generated */    outIdx = 0;
/* Generated */    do
/* Generated */    {
/* Generated */         if( TA_REALBODY(i) > TA_CANDLEAVERAGE( BodyLong, BodyLongPeriodTotal, i ) &&             // long body
/* Generated */             ( 
/* Generated */               ( // white body and very short lower shadow
/* Generated */                 TA_CANDLECOLOR(i) == 1 && 
/* Generated */                 TA_LOWERSHADOW(i) < TA_CANDLEAVERAGE( ShadowVeryShort, ShadowVeryShortPeriodTotal, i ) 
/* Generated */               ) ||
/* Generated */               ( // black body and very short upper shadow
/* Generated */                 TA_CANDLECOLOR(i) == -1 && 
/* Generated */                 TA_UPPERSHADOW(i) < TA_CANDLEAVERAGE( ShadowVeryShort, ShadowVeryShortPeriodTotal, i )
/* Generated */               ) 
/* Generated */             ) )
/* Generated */             outInteger[outIdx++] = TA_CANDLECOLOR(i) * 100;
/* Generated */         else
/* Generated */             outInteger[outIdx++] = 0;
/* Generated */         BodyLongPeriodTotal += TA_CANDLERANGE( BodyLong, i ) - TA_CANDLERANGE( BodyLong, BodyLongTrailingIdx );
/* Generated */         ShadowVeryShortPeriodTotal += TA_CANDLERANGE( ShadowVeryShort, i ) 
/* Generated */                                     - TA_CANDLERANGE( ShadowVeryShort, ShadowVeryShortTrailingIdx );
/* Generated */         i++; 
/* Generated */         BodyLongTrailingIdx++;
/* Generated */         ShadowVeryShortTrailingIdx++;
/* Generated */    } while( i <= endIdx );
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/

