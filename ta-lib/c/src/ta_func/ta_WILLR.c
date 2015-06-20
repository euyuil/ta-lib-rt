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
 *  MF       Mario Fortier
 *
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  010802 MF   Template creation.
 *  052603 MF   Adapt code to compile with .NET Managed C++
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
/* Generated */ int Core::WillRLookback( int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int willRLookback( int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_WILLR_Lookback( int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 14;
/* Generated */    else if( ((int)optInTimePeriod < 2) || ((int)optInTimePeriod > 100000) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */

   return (optInTimePeriod-1);
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_WILLR - Williams' %R
 * 
 * Input  = High, Low, Close
 * Output = double
 * 
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 * 
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::WillR( int    startIdx,
/* Generated */                                       int    endIdx,
/* Generated */                                       SubArray<double>^ inHigh,
/* Generated */                                       SubArray<double>^ inLow,
/* Generated */                                       SubArray<double>^ inClose,
/* Generated */                                       int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                       [Out]int%    outBegIdx,
/* Generated */                                       [Out]int%    outNBElement,
/* Generated */                                       SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::WillR( int    startIdx,
/* Generated */                                       int    endIdx,
/* Generated */                                       cli::array<double>^ inHigh,
/* Generated */                                       cli::array<double>^ inLow,
/* Generated */                                       cli::array<double>^ inClose,
/* Generated */                                       int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                       [Out]int%    outBegIdx,
/* Generated */                                       [Out]int%    outNBElement,
/* Generated */                                       cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode willR( int    startIdx,
/* Generated */                       int    endIdx,
/* Generated */                       double       inHigh[],
/* Generated */                       double       inLow[],
/* Generated */                       double       inClose[],
/* Generated */                       int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                       MInteger     outBegIdx,
/* Generated */                       MInteger     outNBElement,
/* Generated */                       double        outReal[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_WILLR( int    startIdx,
/* Generated */                                 int    endIdx,
/* Generated */                                            const double inHigh[],
/* Generated */                                            const double inLow[],
/* Generated */                                            const double inClose[],
/* Generated */                                            int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                            int          *outBegIdx,
/* Generated */                                            int          *outNBElement,
/* Generated */                                            double        outReal[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
	/* insert local variable here */
   double lowest, highest, tmp, diff;
   int outIdx, nbInitialElementNeeded;
   int trailingIdx, lowestIdx, highestIdx;
   int today, i;

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
/* Generated */    if(!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 14;
/* Generated */    else if( ((int)optInTimePeriod < 2) || ((int)optInTimePeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Insert TA function code here. */

   /* Identify the minimum number of price bar needed
    * to identify at least one output over the specified
    * period.
    */
   nbInitialElementNeeded = (optInTimePeriod-1);

   /* Move up the start index if there is not
    * enough initial data.
    */
   if( startIdx < nbInitialElementNeeded )
      startIdx = nbInitialElementNeeded;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   /* Initialize 'diff', just to avoid warning. */
   diff = 0.0;

   /* Proceed with the calculation for the requested range.
    * Note that this algorithm allows the input and
    * output to be the same buffer.
    */
   outIdx      = 0;
   today       = startIdx;
   trailingIdx = startIdx-nbInitialElementNeeded;
   lowestIdx   = highestIdx = -1;
   diff = highest = lowest  = 0.0;
     
   while( today <= endIdx )
   {
      /* Set the lowest low */
      tmp = inLow[today];
      if( lowestIdx < trailingIdx )
      {
         lowestIdx = trailingIdx;
         lowest = inLow[lowestIdx];
         i = lowestIdx;
         while( ++i<=today )
         {
            tmp = inLow[i];
            if( tmp < lowest )
            {
               lowestIdx = i;
               lowest = tmp;
            }
         }
         diff = (highest - lowest)/(-100.0);
      }
      else if( tmp <= lowest )
      {
         lowestIdx = today;
         lowest = tmp;
         diff = (highest - lowest)/(-100.0);
      }

      /* Set the highest high */
      tmp = inHigh[today];
      if( highestIdx < trailingIdx )
      {
         highestIdx = trailingIdx;
         highest = inHigh[highestIdx];
         i = highestIdx;
         while( ++i<=today )
         {
            tmp = inHigh[i];
            if( tmp > highest )
            {
               highestIdx = i;
               highest = tmp;
            }
         }
         diff = (highest - lowest)/(-100.0);
      }
      else if( tmp >= highest )
      {
         highestIdx = today;
         highest = tmp;
         diff = (highest - lowest)/(-100.0);
      }

      if( diff != 0.0 )
         outReal[outIdx++] = (highest-inClose[today])/diff;
      else
         outReal[outIdx++] = 0.0;
      
      trailingIdx++;
      today++;  
   }

   /* Keep the outBegIdx relative to the
    * caller input before returning.
    */
   VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
   VALUE_HANDLE_DEREF(outNBElement) = outIdx;

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::WillRStateInit( struct TA_WillR_State** _state,
/* Generated */                         int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int willRStateInit( struct TA_willR_State** _state,
/* Generated */                          int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_WILLR_StateInit( struct TA_WILLR_State** _state,
/* Generated */                                             int           optInTimePeriod )  /* From 2 to 100000 */
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
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 14;
/* Generated */    else if( ((int)optInTimePeriod < 2) || ((int)optInTimePeriod > 100000) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    STATE = calloc(1, sizeof(struct TA_WILLR_State));
/* Generated */    STATE_P.mem_index = 0;
/* Generated */    STATE_P.optInTimePeriod = optInTimePeriod;
/* Generated */    #ifndef TA_WILLR_SUPPRESS_MEMORY_ALLOCATION
/* Generated */    MEM_SIZE_P = TA_WILLR_Lookback(optInTimePeriod );
/* Generated */    if (MEM_SIZE_P > 0)
/* Generated */          MEM_P = calloc(MEM_SIZE_P, sizeof(struct TA_WILLR_Data));
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
/* Generated */ int Core::WillRState( struct TA_WillR_State* _state,
/* Generated */                     cli::array<double>^ inHigh,
/* Generated */                     cli::array<double>^ inLow,
/* Generated */                     cli::array<double>^ inClose,
/* Generated */                     cli::array<double>^  *outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int willRState( struct TA_willR_State* _state,
/* Generated */                      double       inHigh,
/* Generated */                      double       inLow,
/* Generated */                      double       inClose,
/* Generated */                      double        *outReal )
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_WILLR_State( struct TA_WILLR_State* _state,
/* Generated */                                         const double inHigh,
/* Generated */                                         const double inLow,
/* Generated */                                         const double inClose,
/* Generated */                                         double        *outReal )
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
/* Generated */    if(!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */ 
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    int _cur_idx = ++STATE.mem_index % MEM_SIZE;
/* Generated */    UNUSED_VARIABLE(_cur_idx); // in case PUSHPOP ethods won't be used
/* Generated */    #ifndef TA_WILLR_SUPPRESS_EXIT_ON_NOT_ENOUGH_DATA
/* Generated */    if (NEED_MORE_DATA) {
/* Generated */          PUSH_TO_MEM(inHigh,inHigh);
/* Generated */          PUSH_TO_MEM(inLow,inLow);
/* Generated */          PUSH_TO_MEM(inClose,inClose);
/* Generated */    return ENUM_VALUE(RetCode,TA_NEED_MORE_DATA,NeedMoreData); }
/* Generated */    #endif
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
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
/* Generated */ int Core::WillRStateFree( struct TA_WillR_State** _state )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int willRStateFree( struct TA_willR_State** _state )
/* Generated */ 
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_WILLR_StateFree( struct TA_WILLR_State** _state )
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
/* Generated */ enum class Core::RetCode Core::WillR( int    startIdx,
/* Generated */                                       int    endIdx,
/* Generated */                                       SubArray<float>^ inHigh,
/* Generated */                                       SubArray<float>^ inLow,
/* Generated */                                       SubArray<float>^ inClose,
/* Generated */                                       int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                       [Out]int%    outBegIdx,
/* Generated */                                       [Out]int%    outNBElement,
/* Generated */                                       SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::WillR( int    startIdx,
/* Generated */                                       int    endIdx,
/* Generated */                                       cli::array<float>^ inHigh,
/* Generated */                                       cli::array<float>^ inLow,
/* Generated */                                       cli::array<float>^ inClose,
/* Generated */                                       int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                       [Out]int%    outBegIdx,
/* Generated */                                       [Out]int%    outNBElement,
/* Generated */                                       cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode willR( int    startIdx,
/* Generated */                       int    endIdx,
/* Generated */                       float        inHigh[],
/* Generated */                       float        inLow[],
/* Generated */                       float        inClose[],
/* Generated */                       int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                       MInteger     outBegIdx,
/* Generated */                       MInteger     outNBElement,
/* Generated */                       double        outReal[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_WILLR( int    startIdx,
/* Generated */                        int    endIdx,
/* Generated */                        const float  inHigh[],
/* Generated */                        const float  inLow[],
/* Generated */                        const float  inClose[],
/* Generated */                        int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                        int          *outBegIdx,
/* Generated */                        int          *outNBElement,
/* Generated */                        double        outReal[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */    double lowest, highest, tmp, diff;
/* Generated */    int outIdx, nbInitialElementNeeded;
/* Generated */    int trailingIdx, lowestIdx, highestIdx;
/* Generated */    int today, i;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inHigh||!inLow||!inClose)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */     if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */        optInTimePeriod = 14;
/* Generated */     else if( ((int)optInTimePeriod < 2) || ((int)optInTimePeriod > 100000) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outReal )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    nbInitialElementNeeded = (optInTimePeriod-1);
/* Generated */    if( startIdx < nbInitialElementNeeded )
/* Generated */       startIdx = nbInitialElementNeeded;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    diff = 0.0;
/* Generated */    outIdx      = 0;
/* Generated */    today       = startIdx;
/* Generated */    trailingIdx = startIdx-nbInitialElementNeeded;
/* Generated */    lowestIdx   = highestIdx = -1;
/* Generated */    diff = highest = lowest  = 0.0;
/* Generated */    while( today <= endIdx )
/* Generated */    {
/* Generated */       tmp = inLow[today];
/* Generated */       if( lowestIdx < trailingIdx )
/* Generated */       {
/* Generated */          lowestIdx = trailingIdx;
/* Generated */          lowest = inLow[lowestIdx];
/* Generated */          i = lowestIdx;
/* Generated */          while( ++i<=today )
/* Generated */          {
/* Generated */             tmp = inLow[i];
/* Generated */             if( tmp < lowest )
/* Generated */             {
/* Generated */                lowestIdx = i;
/* Generated */                lowest = tmp;
/* Generated */             }
/* Generated */          }
/* Generated */          diff = (highest - lowest)/(-100.0);
/* Generated */       }
/* Generated */       else if( tmp <= lowest )
/* Generated */       {
/* Generated */          lowestIdx = today;
/* Generated */          lowest = tmp;
/* Generated */          diff = (highest - lowest)/(-100.0);
/* Generated */       }
/* Generated */       tmp = inHigh[today];
/* Generated */       if( highestIdx < trailingIdx )
/* Generated */       {
/* Generated */          highestIdx = trailingIdx;
/* Generated */          highest = inHigh[highestIdx];
/* Generated */          i = highestIdx;
/* Generated */          while( ++i<=today )
/* Generated */          {
/* Generated */             tmp = inHigh[i];
/* Generated */             if( tmp > highest )
/* Generated */             {
/* Generated */                highestIdx = i;
/* Generated */                highest = tmp;
/* Generated */             }
/* Generated */          }
/* Generated */          diff = (highest - lowest)/(-100.0);
/* Generated */       }
/* Generated */       else if( tmp >= highest )
/* Generated */       {
/* Generated */          highestIdx = today;
/* Generated */          highest = tmp;
/* Generated */          diff = (highest - lowest)/(-100.0);
/* Generated */       }
/* Generated */       if( diff != 0.0 )
/* Generated */          outReal[outIdx++] = (highest-inClose[today])/diff;
/* Generated */       else
/* Generated */          outReal[outIdx++] = 0.0;
/* Generated */       trailingIdx++;
/* Generated */       today++;  
/* Generated */    }
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 11 - DO NOT DELETE THIS LINE ****/

