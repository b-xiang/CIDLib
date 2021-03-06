//
// FILE NAME: CIDBuild_Janitor.Hpp
//
// AUTHOR: Dean Roddey
//
// CREATED: 08/21/1998
//
// COPYRIGHT: Charmed Quark Systems, Ltd @ 2019
//
//  This software is copyrighted by 'Charmed Quark Systems, Ltd' and
//  the author (Dean Roddey.) It is licensed under the MIT Open Source
//  license:
//
//  https://opensource.org/licenses/MIT
//
// DESCRIPTION:
//
//  This header implements a couple simple template classes that provide
//  janitor services for heap allocated data.
//
// CAVEATS/GOTCHAS:
//
// LOG:
//
//  $_CIDLib_Log_$
//

template <class T> class TJanitor
{
    public :
        // -------------------------------------------------------------------
        //  Constructors and Destructor
        // -------------------------------------------------------------------
        TJanitor(T* const pToDelete) :

            m_pToDelete(pToDelete)
        {
        }

        ~TJanitor()
        {
            delete m_pToDelete;
        }

    private :
        // -------------------------------------------------------------------
        //  Unimplemented constructors and operators
        // -------------------------------------------------------------------
        TJanitor();
        TJanitor(const TJanitor&);
        tCIDLib::TVoid operator=(const TJanitor&);


        // -------------------------------------------------------------------
        //  Private data members
        //
        //  m_pToDelete
        //      A pointer to the thing to delete
        // -------------------------------------------------------------------
        T*  m_pToDelete;
};


template <class T> class TArrayJanitor
{
    public :
        // -------------------------------------------------------------------
        //  Constructors and Destructor
        // -------------------------------------------------------------------
        TArrayJanitor(T* const pToDelete) :
            m_pToDelete(pToDelete)
        {
        }

        ~TArrayJanitor()
        {
            delete [] m_pToDelete;
        }

    private :
        // -------------------------------------------------------------------
        //  Unimplemented constructors and operators
        // -------------------------------------------------------------------
        TArrayJanitor();
        TArrayJanitor(const TArrayJanitor&);
        tCIDLib::TVoid operator=(const TArrayJanitor&);


        // -------------------------------------------------------------------
        //  Private data members
        //
        //  m_pToDelete
        //      A pointer to the thing to delete
        // -------------------------------------------------------------------
        T*  m_pToDelete;
};

