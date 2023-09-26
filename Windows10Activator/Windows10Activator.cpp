#include <iostream>
#include <cstdlib>

int main() {
    std::cout << "Activador de Windows 10" << std::endl;
    std::cout << std::endl;
    std::cout << "Este programa puede ser ilegal en muchos casos, a si que no me hago responsable." << std::endl;
    // Ejecutar los comandos del CMD
    system("slmgr /skms kms.digiboy.ir");
    system("slmgr /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX");
    system("slmgr /ato");

    std::cout << "Windows 10 debería estar activado ahora. Si no se activó correctamente, mete esta clave: VK7JG-NPHTM-C97JM-9MPGT-3V66T" << std::endl;
    std::cout << std::endl;
    std::cout << "Pulse una tecla si has hecho esto" << std::endl;

    // Esperar a que el usuario presione una tecla
    system("pause > nul");

    return 0;
}
