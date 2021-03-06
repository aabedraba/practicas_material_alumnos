/**
 * @file Local.h
 * @author Victor M. Rivas Santos <vrivas@ujaen.es>
 * @desc Local class for OOP practices
 * @date 12 de octubre de 2015, 17:08
 */


#include <string>

#ifndef LOCAL_H
#define	LOCAL_H
/**
 * @brief Class to save the data of a Local where the DJ performs
 */
class Local {
public:
    Local( std::string name = "", std::string address = "" );
    Local( const Local &orig );
    virtual ~Local();
    void setAddress( std::string address );
    std::string getAddress( ) const;
    void setName( std::string name );
    std::string getName( ) const;
private:
    std::string _name; ///< Name of the Local
    std::string _address; ///< Address of the Local
};

#endif	/* LOCAL_H */

